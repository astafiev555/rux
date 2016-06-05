#ifndef VERSION_H
#define VERSION_H

#define MAJOR_VERSION    7
#define MINOR_VERSION    0
#define PATCH_VERSION    78
#define SVN_BUILD_NUMBER 2293

#define VER_INTERNAL_NAME "video-client-7.0"
#define VER_FILE_DESCRIPTION "Video Client 7.0"


#define VERSION_H_STR(n) VERSION_H_STRINGIFY_HELPER(n)
#define VERSION_H_STRINGIFY_HELPER(n) #n

#define VERSION_STRING \
  VERSION_H_STR(MAJOR_VERSION) "." \
  VERSION_H_STR(MINOR_VERSION) "." \
  VERSION_H_STR(PATCH_VERSION) "." \
  VERSION_H_STR(SVN_BUILD_NUMBER)


#endif
