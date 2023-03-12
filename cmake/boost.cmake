include(FetchContent)

set(DOWNLOAD_EXTRACT_TIMESTAMP OFF) # Disable timestamp check
set(BOOST_REQD_SUBMODULES
    "tools/cmake;"
    "libs/assert;libs/exception;libs/throw_exception;libs/static_assert;"
    "libs/bind;libs/function_types;libs/function;"
    "libs/chrono;libs/date_time;"
    "libs/concept_check;"
    "libs/config;libs/container;libs/container_hash;"
    "libs/iterator;libs/utility;libs/type_traits;libs/algorithm;;libs/conversion;libs/numeric/conversion;libs/regex;libs/unordered;libs/tokenizer;libs/move;libs/ratio;libs/lexical_cast;"
    "libs/tuple;libs/variant2;libs/typeof;libs/detail;libs/array;libs/type_index;libs/range;libs/optional;libs/smart_ptr;libs/integer;libs/rational;"
    "libs/intrusive;libs/io;"
    "libs/core;libs/align;libs/predef;libs/preprocessor;libs/system;libs/winapi;libs/atomic;"
    "libs/mpl;libs/fusion;libs/mp11;"
    "libs/thread")
FetchContent_Declare(
    Boost
    GIT_REPOSITORY https://github.com/boostorg/boost.git
    GIT_TAG boost-1.80.0
    GIT_SUBMODULES ${BOOST_REQD_SUBMODULES}
    GIT_PROGRESS TRUE
    CONFIGURE_COMMAND ""  # tell CMake it's not a cmake project
)
FetchContent_MakeAvailable(Boost)

