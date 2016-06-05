#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <xan_rdwrlock_info.h>
XRdWrLockInfo::XRdWrLockInfo( void )
{
	_file = 0;
	_line = 0;
	_rdwrlock = 0;
	_module_index = 0;
	_recursion = 0;
};