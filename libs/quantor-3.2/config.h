#ifndef QUANTOR_config_h_INCLUDED
#define QUANTOR_VERSION "3.2"
#ifndef NDEBUG
#define NDEBUG
#endif
#define QUANTOR_LOG0
#define QUANTOR_LOG1
#define QUANTOR_LOG2
#define QUANTOR_STATS0
#define QUANTOR_STATS1
#define QUANTOR_HAVE_PICOSAT
#define QUANTOR_FAST_ALLOC
#define QUANTOR_HAVE_DOUBLE_PRECISION_INT
typedef long DPI;
typedef unsigned long Word;
typedef unsigned Signature;
#define QUANTOR_LIT_ALIGNMENT 32
#define QUANTOR_COMPILE_TIME_OPTIONS \
"version             3.2\\n" \
"debug               no\\n" \
"check               no\\n" \
"log                 yes\\n" \
"loglevel            2\\n" \
"stats               yes\\n" \
"statslevel          1\\n" \
"CC                  gcc\\n" \
"CCVERSION           4.8.3\\n" \
"CFLAGS              -Wall -W -fPIC -O3 -DNDEBUG -fno-strict-aliasing\\n" \
"funex               no\\n" \
"limmat              no\\n" \
"nanosat             no\\n" \
"compsat             no\\n" \
"booleforce          no\\n" \
"picosat             yes\\n" \
"qbfeval             no\\n" \
"havedpi             yes\\n" \
"DPI                 long\\n" \
"Word                unsigned long\\n" \
"sig                 32\\n" \
"sigref              no\\n" \
"Signature           unsigned\\n" \
"litalign            32\\n" \
"fastalloc           yes\\n" \
""
#endif
