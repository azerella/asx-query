# ASX Query

[![GitHub stars](https://img.shields.io/github/stars/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/stargazers)
[![GitHub license](https://img.shields.io/github/license/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/blob/master/LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/adamzerella/ASXQuery.svg)](https://github.com/adamzerella/adamzerella/issues)

> <strong>NOTE: THIS IS A DEPRECIATED AND UNMAINTAINED PROJECT! &nbsp; IT HAS ONLY HAD THE DOCUMENTATION AND PROJECT STRUCTURE REFACTORED SINCE INCEPTION (~2017)</strong>

> Tool to rapidly query [Yahoo Finance](https://au.finance.yahoo.com/) for a share price from any given valid ticker code.

# Prerequisites

- [curl](https://curl.haxx.se/download.html) - Used for the GET query
- [build-essential](https://gcc.gnu.org/) - Toolchain to build programs (g++, make etc)
> NOTE: **MacOS** run: `xcode-select --install` for build-essential equivalent.


# Compile
```bash
# To compile with all CPU cores
make -j $(sysctl -n hw.ncpu) all
```

# Start
```bash
$ ./bin/asxquery
```

### Example usage:
```
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
