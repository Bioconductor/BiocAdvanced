#' @useDynLib uuid, .registration = TRUE
#' @export
uuid <- function(n = 1)
     .Call(.uuid, as.integer(n))
    
