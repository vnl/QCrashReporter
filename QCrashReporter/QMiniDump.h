#if !defined(AFX_MDUMP_H__FCECFEFE6E_FA36_4693_B07C_F8JHT75BB0101B__INCLUDED_)
#define AFX_MDUMP_H__FCECFEFE6E_FA36_4693_B07C_F8JHT75BB0101B__INCLUDED_
#ifdef USE_MINI_DUMP


#include "dbghelp.h"

typedef BOOL(WINAPI *MINIDUMPWRITEDUMP)(HANDLE hProcess, DWORD dwPid, HANDLE hFile, MINIDUMP_TYPE DumpType,
	CONST PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam,
	CONST PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam,
	CONST PMINIDUMP_CALLBACK_INFORMATION CallbackParam
	);

#define MAX_WARNING_MESSAGE_PATH 1024

class QMiniDump
{
private:
	static LPCWSTR m_szAppName;

	static LPWSTR m_szAppVersion;

	static LPWSTR m_szAppBuildNumber;

	static WCHAR m_szMessageText[MAX_WARNING_MESSAGE_PATH];

	static LPWSTR m_szDumpFilePath;

	static LONG WINAPI TopLevelFilter(struct _EXCEPTION_POINTERS *pExceptionInfo);

public:
	QMiniDump(LPCWSTR szAppName, LPCWSTR szVersion, LPCWSTR szBuildNumber = NULL);
	~QMiniDump();
	static void SetVersion(LPCWSTR szVersion);
	static void SetBuildNumber(LPCWSTR szBuildNumber);
	static void SetDumpFilePath(LPCWSTR szFilePath);
	static int SetWarningMessage(LPCWSTR szMessageText)
	{
		if (szMessageText)
		{
			int iLen = wcslen(szMessageText);
			if (iLen < MAX_WARNING_MESSAGE_PATH - MAX_PATH)
			{
				wcscpy(m_szMessageText, szMessageText);
				return 0;
			}
		}
		return 1;
	}
};
#endif
#endif