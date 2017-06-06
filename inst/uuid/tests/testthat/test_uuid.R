
context("uuid")

test_that("uuid returns different values", {
    expect_true(is.character(uuid()))
    expect_true(length(uuid()) == 1L)
    uu <- unique(unlist(replicate(100, uuid())))
    expect_identical(length(uu), 100L)
})