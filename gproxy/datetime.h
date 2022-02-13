#include <string>
/* int type */
#define __DATE_YEAR__ (__DATE__[7] - '0') * 1000 + (__DATE__[8] - '0') * 100 + (__DATE__[9] - '0') * 10 + (__DATE__[10] - '0')
#define __DATE_MONTH__																								\
	( (__DATE__[0] == 'J') ? ((__DATE__[1] == 'a') ? 1 : ((__DATE__[2] == 'n') ? 6 : 7))    /* Jan, Jun or Jul*/	\
	: (__DATE__[0] == 'F') ? 2                                                              /* Feb*/				\
	: (__DATE__[0] == 'M') ? ((__DATE__[2] == 'r') ? 3 : 5)                                 /* Mar or May*/			\
	: (__DATE__[0] == 'A') ? ((__DATE__[1] == 'p') ? 4 : 8)                                 /* Apr or Aug*/			\
	: (__DATE__[0] == 'S') ? 9                                                              /* Sep*/				\
	: (__DATE__[0] == 'O') ? 10                                                             /* Oct*/				\
	: (__DATE__[0] == 'N') ? 11                                                             /* Nov*/				\
	: (__DATE__[0] == 'D') ? 12                                                             /* Dec*/				\
	: 0)
#define __DATE_DAY__ (__DATE__[4] == ' ') ? (__DATE__[5] - '0') : (__DATE__[4] - '0') * 10 + (__DATE__[5] - '0')
// YYYY/MM/DD HH:MM:SS
#define __DATETIME_STRING_MACRO__ UTIL_ToString(__DATE_YEAR__) + "/" + UTIL_ToString(__DATE_MONTH__) + "/" + UTIL_ToString(__DATE_DAY__) + " " + __TIME__ 
extern std::string __DATETIME_STRING_VARIABLE__;