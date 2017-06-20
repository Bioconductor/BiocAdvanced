# Advanced _R_ and _Bioconductor_

Instructors: Martin Morgan, Hervé Pagès<br />
Date: June 19-20, 2017<br />
Location: University of Zurich

This course covers details of _R_'s evaluation, vector representation,
garbage collection, C interface, and S3 and S4 approaches to complex
data representation. The course is meant to provide attendees with the
knowledge and confidence to confront _R_ behavior and programming
challenges. Participants should be very comfortable with _R_ syntax;
ideally they will have experience writing _R_ packages, basic
familiarity with S3 and / or S4 object systems, and have at least
thought about tackling C-level implementations of complicated
algorithms. The course includes discussion of _Bioconductor_'s S4
object system, offering insight into using and designing data
representations for large and complex data.

- [Preparation][] (Optional)

Part 1: [Inside the mind of _R_][] (Day 1)

- _R_ as we know it -- why it behaves the way it does
- Inner _R_: understanding the _C_ API and implementation

Part 2: [S3 classes and methods][] (Day 2)

- _R_ data and programs (vectors, classes, functions and methods) -- the S3 way

Part 3: [S4 classes and methods][] (Day 2)

- _R_ data and programs (classes, functions and methods) -- the S4 way
- Essential _Bioconductor_ classes: implementation and extension

Part 4: [Doing it better][] (Day 2)

- Directions in _R_ and software development

[Preparation]: vignettes/Preparation.Rmd
[Inside the mind of _R_]: vignettes/Inside-R.Rmd
[S3 classes and methods]: vignettes/S3-classes-and-methods.Rmd
[S4 classes and methods]: vignettes/S4-classes-and-methods.Rmd
[Doing it better]: vignettes/Better.Rmd
