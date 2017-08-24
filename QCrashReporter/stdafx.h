#include <QtWidgets>

#define PRODUCE_NAME		L"QCrashReporter"
#define STR_NUM_VERSION		L"0.0.1"
#define STR_NUM_BUILD		L"0017"

#define USE_MINI_DUMP
#ifdef USE_MINI_DUMP
#include "QMiniDump.h"
extern QMiniDump g_QMiniDump;
#endif