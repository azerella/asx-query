# ASX Query

[![GitHub stars](https://img.shields.io/github/stars/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/stargazers)
[![GitHub license](https://img.shields.io/github/license/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/blob/master/LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/issues)

> <strong>NOTE: THIS IS A DEPRECIATED AND UNMAINTAINED PROJECT! &nbsp; IT HAS ONLY HAD THE DOCUMENTATION AND PROJECT STRUCTURE REFACTORED SINCE INCEPTION (~2017)</strong>

> Tool to rapidly query [Yahoo Finance](https://au.finance.yahoo.com/) for a share price from any given valid ticker code.

# Prerequisites

- [curl >= 7.5.0](https://curl.haxx.se/download.html) - To compile dynamically.
- [gcc >= 7.1.0](https://gcc.gnu.org/)
- [make >= 3.9](https://www.gnu.org/software/make/)


# Compile
```bash
# Prefix example for building to /usr/local/bin
make configure --prefix=/usr/local

# To compile with all CPU cores
make -j $(nproc --all) all

make install
```

# Start
```bash
$ asxquery

# Example usage
ASX code to query: CBA
77.39
77.40
77.21
...
```

# License

This project is licensed under the MIT License - see the [LICENSE](https://raw.githubusercontent.com/adamzerella/ASXQuery/master/LICENSE) file for details.

# Contributors

<div style="display:inline;">
  <img width="64" height="64" href="https://github.com/adamzerella" src="https://avatars0.githubusercontent.com/u/1501560?s=460&v=4" alt="Adam A. Zerella"/>
</div>
