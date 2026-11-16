# lvec

Out-of-memory vectors (numeric, integer, logical and character) kept partially on disk with memory mapping, with C++ headers for extension packages.

Compatibility updates by Renova.

Version 0.2.5.9002: the comparison, offset and difference operators of the C++ iterator in `inst/include/iterator.h` are `const`, and dereferencing a `const` iterator returns a writable element reference, so `std::sort` in LLVM libc++ (macOS, WebAssembly and Windows ARM64 builds) compiles. Operator results are unchanged.

Version 0.2.5.9001: the C++ iterator in `inst/include/iterator.h` declares its iterator traits as member typedefs instead of deriving from the deprecated `std::iterator`, and the obsolete `SystemRequirements: C++11` is dropped. The DESCRIPTION gains `Authors@R` and drops the stale `Date`.

## Install

```r
install.packages("lvec", repos = c(
  Renova = "https://renova-r.r-universe.dev",
  CRAN = "https://cloud.r-project.org"
))
```

See the [R-universe package page](https://renova-r.r-universe.dev/lvec) for builds and installation. This release is tagged on GitHub as `renova-0.2.5.9002`:

```r
remotes::install_github("renova-r/lvec@renova-0.2.5.9002")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

lvec is by Jan van der Laan; the original CRAN package is at <https://CRAN.R-project.org/package=lvec>. License: GPL-3; see [COPYING](COPYING).
