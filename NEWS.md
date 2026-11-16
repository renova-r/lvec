# lvec 0.2.5.9001

Renova release, based on CRAN lvec 0.2.5 (archived on CRAN 2023-08-10).

- `inst/include/iterator.h`: `lvec_iterator` no longer inherits from `std::iterator<...>`; it declares `iterator_category`, `value_type`, `difference_type`, `pointer` and `reference` typedefs with the same types (C++ header).
- `DESCRIPTION`: `SystemRequirements: C++11` removed (current R uses a newer C++ standard by default).
- `DESCRIPTION`: `Authors@R` added and `Author` rewritten as `Jan van der Laan [aut, cre]` (metadata only).
- `DESCRIPTION`: stale optional `Date` field removed (metadata only).

Release preparation:

- `DESCRIPTION`: `Version` set to `0.2.5.9001`; "Compatibility updates by Renova." appended to `Description`.
- The stale `MD5` file was removed.
- `COPYING` (GNU GPL version 3 text) was added; the `License` field is unchanged.
- `README.md` was added and is excluded from the R build.
- `NEWS.md` was added for this release and is excluded from the R build; the existing `NEWS` file is unchanged.
