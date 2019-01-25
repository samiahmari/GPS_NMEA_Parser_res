/**
 * \page            page_appnote Application note
 * \tableofcontents
 *
 * \section         sect_clone_get_started Clone repository and getting started
 *
 * Library development is fully hosted on Github and there is no future plans to move to any other platform.
 *
 * There are `2` repositories
 *
 *	- <a href="https://github.com/MaJerle/GPS_NMEA_Parser"><b>GPS_NMEA_Parser</b></a>: Source code of library itself.
 *	    - Repository is required when developing final project
 *
 *	- <a href="https://github.com/MaJerle/GPS_NMEA_Parser_res"><b>GPS_NMEA_Parser_res</b></a>: Resources, development code,
 *		documentation sources, examples, code snippets, etc.
 *      - This repository uses `GPS_NMEA_Parser` repository as `submodule`
 *	    - Repository is used to evaluate library using prepared examples
 *
 * \subsection      subsect_clone_res Clone resources repository with examples
 *
 * Easiest way to test the library is to clone resources repository.
 *
 *  - Download and install `git` if not already
 *  - Open console and navigate to path in the system to clone repository to. Use command `cd your_path`
 *  - Run `git clone --recurse-submodules https://github.com/MaJerle/GPS_NMEA_Parser_res` command to clone repository including submodules
 *  - Navigate to `examples` directory and run favourite example
 *
 * \subsection      subsect_clone_lib Clone library only
 *
 * If you are already familiar with library and you wish to include it in existing project, easiest way is to clone library repository only.
 *
 *  - Download and install `git` if not already
 *  - Open console and navigate to path in the system to clone repository to. Use command `cd your_path`
 *  - Run `git clone https://github.com/MaJerle/GPS_NMEA_Parser` command to clone repository
 */