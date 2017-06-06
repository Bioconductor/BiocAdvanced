
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

static boost::uuids::random_generator uuid_generator =
    boost::uuids::random_generator();

std::string uuid_generate()
{
    return boost::uuids::to_string(uuid_generator());
}

#include <Rinternals.h>

SEXP uuid(SEXP n_sexp)
{
    n_sexp = PROTECT(Rf_coerceVector(n_sexp, INTSXP));
    bool test = IS_SCALAR(n_sexp, INTSXP) && (R_NaInt != Rf_asInteger(n_sexp));
    if (!test) {
        UNPROTECT(1);
        Rf_error("'n' cannot be coerced to integer(1) and not NA");
    }
    int n = Rf_asInteger(n_sexp);
    UNPROTECT(1);

    SEXP result = PROTECT(Rf_allocVector(n, STRSXP));
    for (int i = 0; i < n; ++i)
        SET_STRING_ELT(result, i, mkChar(uuid_generate().c_str()));
    UNPROTECT(1);

    return result;
}

#include <R_ext/Rdynload.h>

extern "C" {

    static const R_CallMethodDef callMethods[] = {
        {".uuid", (DL_FUNC) &uuid, 1},
        {NULL, NULL, 0}
    };

    void R_init_uuid(DllInfo *info)
    {
        R_registerRoutines(info, NULL, callMethods, NULL, NULL);
    }
}
