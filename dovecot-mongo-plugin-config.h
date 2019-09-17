#ifndef _DOVECOT_MONGO_PLUGIN_CONFIG_H
#define _DOVECOT_MONGO_PLUGIN_CONFIG_H 1
 
/* dovecot-mongo-plugin-config.h. Generated automatically at end of configure. */
/* config-local.h.  Generated from config-local.h.in by configure.  */
/* config-local.h.in.  Generated from configure.ac by autoheader.  */

/* Debug Mode */
/* #undef DEBUG */

/* Define if you have the `set_alloc_hint2' function */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_ALLOC_HINT_2
#define DOVECOT_MONGO_PLUGIN_HAVE_ALLOC_HINT_2 1
#endif

/* define if the compiler supports basic C++11 syntax */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_CXX11
#define DOVECOT_MONGO_PLUGIN_HAVE_CXX11 1
#endif

/* dict_lookup_result.values supported */
/* #undef HAVE_DICT_LOOKUP_RESULT_VALUES */

/* dict_vfuncs.set_timestamp supported */
/* #undef HAVE_DICT_SET_TIMESTAMP */

/* dict_vfuncs.switch_ioloop supported */
/* #undef HAVE_DICT_SWITCH_IOLOOP */

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_DLFCN_H
#define DOVECOT_MONGO_PLUGIN_HAVE_DLFCN_H 1
#endif

/* mail_vfuncs.index_mail_set_cache_corrupted_reason supported */
/* #undef HAVE_INDEX_MAIL_SET_CACHE_CORRUPTED_REASON */

/* index-pop3-uidl.h found */
/* #undef HAVE_INDEX_POP3_UIDL_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_INTTYPES_H
#define DOVECOT_MONGO_PLUGIN_HAVE_INTTYPES_H 1
#endif

/* HAVE_ITER_FROM_INDEX_DIR supported */
/* #undef HAVE_ITER_FROM_INDEX_DIR */

/* Define if you have the RADOS library */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_LIBRADOS
#define DOVECOT_MONGO_PLUGIN_HAVE_LIBRADOS 1
#endif

/* Define if you have the `struct mail_storage_vfuncs.list_index_corrupted'
   member */
/* #undef HAVE_LIST_INDEX_CORRUPTED */

/* MAIL_INDEX_HDR_FLAG_FSCKD supported */
/* #undef HAVE_MAIL_INDEX_HDR_FLAG_FSCKD */

/* mail_save_context.copy_src_mail supported */
/* #undef HAVE_MAIL_SAVE_CONTEXT_COPY_SRC_MAIL */

/* HAVE_MAIL_STORAGE_TRANSACTION_OLD_SIGNATURE supported */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_MAIL_STORAGE_TRANSACTION_OLD_SIGNATURE
#define DOVECOT_MONGO_PLUGIN_HAVE_MAIL_STORAGE_TRANSACTION_OLD_SIGNATURE /**/
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_MEMORY_H
#define DOVECOT_MONGO_PLUGIN_HAVE_MEMORY_H 1
#endif

/* Define if you have the `omap_get_keys2' function */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_OMAP_GET_KEYS_2
#define DOVECOT_MONGO_PLUGIN_HAVE_OMAP_GET_KEYS_2 1
#endif

/* Define if you have the `rados_read_op_omap_get_vals2' function */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_OMAP_GET_VALS2
#define DOVECOT_MONGO_PLUGIN_HAVE_OMAP_GET_VALS2 1
#endif

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_STDINT_H
#define DOVECOT_MONGO_PLUGIN_HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_STDLIB_H
#define DOVECOT_MONGO_PLUGIN_HAVE_STDLIB_H 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_STRINGS_H
#define DOVECOT_MONGO_PLUGIN_HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_STRING_H
#define DOVECOT_MONGO_PLUGIN_HAVE_STRING_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_SYS_STAT_H
#define DOVECOT_MONGO_PLUGIN_HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_SYS_TYPES_H
#define DOVECOT_MONGO_PLUGIN_HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef DOVECOT_MONGO_PLUGIN_HAVE_UNISTD_H
#define DOVECOT_MONGO_PLUGIN_HAVE_UNISTD_H 1
#endif

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#ifndef DOVECOT_MONGO_PLUGIN_LT_OBJDIR
#define DOVECOT_MONGO_PLUGIN_LT_OBJDIR ".libs/"
#endif

/* Release Mode */
#ifndef DOVECOT_MONGO_PLUGIN_NDEBUG
#define DOVECOT_MONGO_PLUGIN_NDEBUG /**/
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_BUGREPORT
#define DOVECOT_MONGO_PLUGIN_PACKAGE_BUGREPORT "https://github.com/jrse/dovecot-mongo-plugin/issues/new"
#endif

/* Define to the full name of this package. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_NAME
#define DOVECOT_MONGO_PLUGIN_PACKAGE_NAME "dovecot-mongo-plugin"
#endif

/* Define to the full name and version of this package. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_STRING
#define DOVECOT_MONGO_PLUGIN_PACKAGE_STRING "dovecot-mongo-plugin 0.0.21"
#endif

/* Define to the one symbol short name of this package. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_TARNAME
#define DOVECOT_MONGO_PLUGIN_PACKAGE_TARNAME "dovecot-mongo-plugin"
#endif

/* Define to the home page for this package. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_URL
#define DOVECOT_MONGO_PLUGIN_PACKAGE_URL "https://github.com/jrse/dovecot-mongo-plugin"
#endif

/* Define to the version of this package. */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION
#define DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION "0.0.21"
#endif

/* Dovecot Ceph plugins major version */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION_MAJOR
#define DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION_MAJOR 0
#endif

/* Dovecot Ceph plugins minor version */
#ifndef DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION_MINOR
#define DOVECOT_MONGO_PLUGIN_PACKAGE_VERSION_MINOR 0
#endif

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#ifndef DOVECOT_MONGO_PLUGIN_STDC_HEADERS
#define DOVECOT_MONGO_PLUGIN_STDC_HEADERS 1
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
 
/* once: _DOVECOT_MONGO_PLUGIN_CONFIG_H */
#endif
