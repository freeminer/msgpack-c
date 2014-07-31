#ifndef MSGPACK_VERSION_H__
#define MSGPACK_VERSION_H__
#ifdef __cplusplus
extern "C" {
#endif
const char* msgpack_version(void);
int msgpack_version_major(void);
int msgpack_version_minor(void);
#define MSGPACK_VERSION "0.5.8"
#define MSGPACK_VERSION_MAJOR 0
#define MSGPACK_VERSION_MINOR 5
#ifdef __cplusplus
}
#endif
#endif /* msgpack/version.h */
