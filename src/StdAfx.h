#pragma once


//atlmfc
#include <afx.h>
#include <afxadv.h>
#include <afxcoll.h>
#include <afxconv.h>
#include <afxcview.h>
#include <afxdlgs.h>
#include <afxdllx.h>
#include <afxmt.h>
#include <afxpriv.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>
#include <atlconv.h>
#include <statreg.h>
//
#include <afxcmn.h>
#include <afxdao.h>
#include <afxdb.h>
#include <afxdisp.h>
#include <afxdtctl.h>
#include <afxext.h>
#include <afxodlgs.h>
#include <afxole.h>
#include <afxtempl.h>
#include <afxwin.h>


//V60.A
#include <winsock2.h>
#include <winsock.h>
#include <windows.h>
#include <windowsx.h>
#include <winnt.h>
#include <winspool.h>
#include <windows.h>
#include <winbase.h>
#include <winreg.h>
#include <mmsystem.h>
#include <objbase.h>
#include <sql.h>
#include <sqlext.h>
#include <cderr.h>
#include <commdlg.h>
#include <guiddef.h>
#include <mmreg.h>
#include <oaidl.h>
#include <ocidl.h>
#include <ole2.h>
#include <rpc.h>
#include <rpcndr.h>
#include <initguid.h>
#include <oleauto.h>
#include <tlhelp32.h>
#include <vdmdbg.h>
#include <winuser.h>


// std_h
// Microsoft Visual Studio 9.0
#include <limits.h>
#include <assert.h>
#include <climits>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <float.h>
#include <io.h>
#include <math.h>
#include <mbstring.h>
#include <memory.h>
#include <process.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <time.h>
#include <wchar.h>
#include <comdef.h>
#include <crtdbg.h>
#include <eh.h>
#include <limits.h>
#include <memory.h>
#include <new.h>
#include <time.h>
#include <typeinfo.h>
#include <xmemory>
#include <yvals.h>
#include <sys/stat.h>
#include <sys/timeb.h>
#include <sys/types.h>
#include <direct.h>
#include <comutil.h>
#include <xstring>


// cstd
#include <cerrno>
#include <cstring>
#include <ctime>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cfloat>
#include <cstddef>
#include <cstdio>
#include <cstdlib>


// stl
#include <string>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iostream>
#include <istream>
#include <ostream>
#include <strstream>
#include <sstream>
#include <fstream>
#include <streambuf>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <algorithm>
#include <memory>
#include <new>
#include <typeinfo>
#include <utility>
#include <iterator>
#include <locale>
#include <complex>
#include <limits>
#include <functional>
#include <exception>


// boost
#include <boost/shared_ptr.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/regex.hpp>
#include <boost/cast.hpp>
#include <boost/config.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/tokenizer.hpp>
#include <boost/unordered_map.hpp>
#include <boost/format.hpp>
//#include <boost/date_time/posix_time/posix_time.hpp> // error LNK2001
#include <boost/filesystem/exception.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/interprocess/allocators/allocator.hpp>
#include <boost/interprocess/managed_windows_shared_memory.hpp>
#include <boost/interprocess/sync/named_mutex.hpp>
#include <boost/multi_index/composite_key.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/algorithm/string.hpp>


// ACE
#include <ace/ACE.h>
#include <ace/OS.h>
#include <ace/Singleton.h>
#include <ace/Future.h>
#include <ace/Guard_T.h>
#include <ace/INET_Addr.h>
#include <ace/SOCK_Connector.h>
#include <ace/Object_Manager.h>
#include <ace/Log_Msg.h>
#include <ace/Tokenizer_T.h>
#include <ace/Message_Block.h>
#include <ace/Method_Request.h>
#include <ace/OS_NS_sys_time.h>
#include <ace/Date_Time.h>
#include <ace/Time_Value.h>
#include <ace/Timer_Heap.h>
#include <ace/Timer_Queue.h>
#include <ace/Timer_Queue_Adapters.h>
#include <ace/os_include/netinet/os_tcp.h>
#include <ace/Task.h>
#include <ace/Thread_Manager.h>
#include <ace/Synch.h>
#include <ace/Mutex.h>
#include <ace/RW_Mutex.h>
#include <ace/Thread_Semaphore.h>
#include <ace/Containers_T.h>
#include <ace/Unbounded_Queue.h>
#include <ace/RB_Tree.h>
#include <ace/Functor.h>
#include <ace/Null_Mutex.h>
#include <ace/SString.h>
#include <ace/Malloc_T.h>
#include <ace/Memory_Pool.h>
#include <ace/Activation_Queue.h>
#include <ace/Global_Macros.h>
#include <ace/SOCK_Stream.h>


// omniORB
#include <omnithread.h>
#include <omniORB4/CORBA.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/IOP_S.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>
#include <omniORB4/internal/orbParameters.h>
#include <omniNotify.h>
#include <COS/CosNotifyChannelAdmin.hh>
#include <COS/CosNotifyFilter.hh>
#include <COS/AttNotification.hh>
#include <COS/CosEventChannelAdmin.hh>
#include <COS/CosEventComm.hh>
#include <COS/CosNotification.hh>
#include <COS/CosNotifyComm.hh>


// TODO:
// VisualCpp
// cots\VisualCpp\Include
//#include <direct.h>
//#include <Winspool.h>

// WinStackTrace
// cots\WinStackTrace\include\stack.h
//#include <stack.h>

// ZipArchive
// ots\ZipArchive\zlib\zlib.h
//#include <zlib.h>
//#include <ZipArchive.h>

// oracle
// cots\oracle\10.2.0\winnt\inc\oci.h
//#include <oci.h>
//#include <ociapr.h>
//#include <ocidfn.h>
//#include <oratypes.h>
//#include <orl.h>

// DirectSound
// cots\DirectSound\inc\dplay.h
//#include <cots\DirectSound\inc\dplay.h>
//#include <cots\DirectSound\inc\dsound.h>
//#include <cots\DirectSound\inc\dxerr8.h>

// HTMLHelp
// #include <cots\HTMLHelp\inc\htmlhelp.h>


// IATSAlarmEvent
// #include <COTS\IATSAlarmEvent\Include\IATSEventsAPI.h>
// #include <COTS\IATSAlarmEvent\Include\RelatedIP_API.h>
// #include <COTS\IATSAlarmEvent\Include\RelatedSchematic_API.h>

// Nero
// #include <cots\Nero\inc\NeroAPIglue.h>

// TeeChart
// code\cots\TeeChart\zoom.h
//#include <axes.h>
//#includ <axis.h>
//#includ <axisTitle.h>
//#includ <axisLabels.h>
//#includ <series.h>
//#includ <valuelist.h>
//#includ <lineseries.h>
//#includ <printer.h>
//#includ <export.h>
//#includ <textexport.h>
//#includ <zoom.h>
//#includ <pen.h>
//#includ <titles.h>
//#includ <strings.h>
//#includ <marks.h>
//#includ <teefont.h>
//#includ <canvas.h>
//#includ <panel.h>

// WinTech
//cots\WinTech\OPCServerToolKit\WTOPCsvrAPI.h
//#includ <OPCServerToolKit\WTOPCsvrAPI.h>
//#includ <OPCServerToolKit\opc_ae.h>
//#includ <OPCServerToolKit\opcda.h>

//log4Cxx/rollingfileappender.h
//log4cxx/PropertyConfigurator.h
//log4Cxx/basicconfigurator.h
//log4Cxx/helpers/exception.h
//log4Cxx/helpers/pool.h
//log4Cxx/logger.h
//log4Cxx/patternlayout.h
//log4Cxx/simplelayout.h
//log4Cxx/xml/domconfigurator.h
