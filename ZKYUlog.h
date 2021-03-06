
//written by zkyu@mail.ustc.edu.cn
//20161103
//zkyulog.h 日志头文件


#ifndef _ZKYU_LOG_H_
#define _ZKYU_LOG_H_

/*
#define IC_NO_LOG_LEVEL			0
#define IC_DEBUG_LEVEL			1
#define IC_INFO_LEVEL			2
#define IC_WARNING_LEVEL		3
#define IC_ERROR_LEVEL			4;
*/

/************************************************************************/
/* 
const char *file：文件名称
int line：文件行号
int level：错误级别
		0 -- 没有日志
		1 -- debug级别
		2 -- info级别
		3 -- warning级别
		4 -- err级别
int status：错误码
const char *fmt：可变参数
*/
/************************************************************************/
//实际使用的Level
//使用方法 ZKYU_LOG(__FILE__, __LINE__, LogLevel[1],-1,"出错的原因" );
extern int  LogLevel[5];
void ZKYU_LOG(const char *file, int line, int level, int status, const char *fmt, ...);

#endif
