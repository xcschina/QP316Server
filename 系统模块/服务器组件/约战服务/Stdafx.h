#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// 从 Windows 头中排除极少使用的资料
#endif

// 如果您必须使用下列所指定的平台之前的平台，则修改下面的定义。
// 有关不同平台的相应值的最新信息，请参考 MSDN。
#ifndef WINVER				// 允许使用特定于 Windows 95 和 Windows NT 4 或更高版本的功能。
#define WINVER 0x0501		// 将此更改为针对于 Windows 98 和 Windows 2000 或更高版本的合适的值。
#endif

#ifndef _WIN32_WINNT		// 允许使用特定于 Windows NT 4 或更高版本的功能。
#define _WIN32_WINNT 0x0501	// 将此更改为针对于 Windows 2000 或更高版本的合适的值。
#endif						

#ifndef _WIN32_WINDOWS		// 允许使用特定于 Windows 98 或更高版本的功能。
#define _WIN32_WINDOWS 0x0501 // 将此更改为针对于 Windows Me 或更高版本的合适的值。
#endif

#ifndef _WIN32_IE			// 允许使用特定于 IE 4.0 或更高版本的功能。
#define _WIN32_IE 0x0501	// 将此更改为针对于 IE 5.0 或更高版本的合适的值。
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// 某些 CString 构造函数将为显式的

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE 类
#include <afxodlgs.h>       // MFC OLE 对话框类
#include <afxdisp.h>        // MFC 自动化类
#endif // _AFX_NO_OLE_SUPPORT

#include <afxdtctl.h>		// MFC 对 Internet Explorer 4 公共控件的支持
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

//////////////////////////////////////////////////////////////////////////

//组件头文件

#include "..\..\服务器组件\游戏服务\GameServiceHead.h"
//////////////////////////////////////////////////////////////////////////////////
//链接代码

#ifndef _DEBUG
	#ifndef _UNICODE
		#pragma comment (lib,"../../链接库/Ansi/ServiceCore.lib")
		#pragma comment (lib,"../../链接库/Ansi/GameService.lib")
		#pragma comment (lib,"../../链接库/Ansi/KernelEngine.lib")
	#else
		#pragma comment (lib,"../../链接库/Unicode/ServiceCore.lib")
		#pragma comment (lib,"../../链接库/Unicode/GameService.lib")
		#pragma comment (lib,"../../链接库/Unicode/KernelEngine.lib")
	#endif
#else
	#ifndef _UNICODE
		#pragma comment (lib,"../../链接库/Ansi/ServiceCoreD.lib")
		#pragma comment (lib,"../../链接库/Ansi/GameServiceD.lib")
		#pragma comment (lib,"../../链接库/Ansi/KernelEngineD.lib")
	#else
		#pragma comment (lib,"../../链接库/Unicode/ServiceCoreD.lib")
		#pragma comment (lib,"../../链接库/Unicode/GameServiceD.lib")
		#pragma comment (lib,"../../链接库/Unicode/KernelEngineD.lib")
	#endif
#endif
//////////////////////////////////////////////////////////////////////////

