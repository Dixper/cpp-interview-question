# C++ Interview Question

This solution contains question projects that compile to `dll`s and interface with the tests via the `dllexport`ed
functions.

## How to enter the interview?

To enter the interview you should follow the following steps:

+ Download the code, and push it to your own private repository.
+ Add us (users: imayo, HosseinGhDixper) as collaborators.
+ Make a pull request for your solution on your own private repository and add us as reviewers.

You are in! We will review your submission and will let you know how it goes!

## What can I change in the repository?

You can change everything you desire as long as the tests pass. Just take notice that the questions interface with the
tests via the exported functions, so it's a good idea to avoid modifying these interfaces. (Also less code is better,
so try to keep your changes small)

## How will my submission be evaluated?

Following points will be considered in your submission's evaluation:

+ Code quality and simplicity.
+ Big O complexity and overall performance.
+ Memory footprint.
+ Unit tests and the completeness of the tested behavior.

Try to use the starndard library to its fullest and unless you justifiably need it avoid adding external dependencies,
the chance is you don't need it; however, regarding unit tests you're better off using a unit testing framework.

## What are the questions?

Each question is an exported function that needs to be implemented and tested. There will be adiquate documentation on
the functions regarding the expected behavior. If you had difficulty understanding the questions let us know so we can
help you figure things out.

Each question has a pre-writen test provided in the project folder as an executable (built in debug mode) that runs on
github actions and somewhat tests the expected behavior; however, the tests are not thorough and you will need to
implement your own tests (your implemented unit tests will be evaluated).
