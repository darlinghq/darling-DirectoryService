#ifndef	_DSmemberdMIG_user_
#define	_DSmemberdMIG_user_

/* Module DSmemberdMIG */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN VOUCHER CODE */

#ifndef KERNEL
#if defined(__has_include)
#if __has_include(<mach/mig_voucher_support.h>)
#ifndef USING_VOUCHERS
#define USING_VOUCHERS
#endif
#ifndef __VOUCHER_FORWARD_TYPE_DECLS__
#define __VOUCHER_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern boolean_t voucher_mach_msg_set(mach_msg_header_t *msg) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif // __VOUCHER_FORWARD_TYPE_DECLS__
#endif // __has_include(<mach/mach_voucher_types.h>)
#endif // __has_include
#endif // !KERNEL
	
/* END VOUCHER CODE */

	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern int mig_strncpy_zerofill(char *dest, const char *src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	DSmemberdMIG_MSG_COUNT
#define	DSmemberdMIG_MSG_COUNT	9
#endif	/* DSmemberdMIG_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <DSmemberdMIG_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine MembershipCall */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_MembershipCall
(
	mach_port_t server,
	kauth_identity_extlookup *request,
	audit_token_t *atoken
);

/* Routine GetStats */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_GetStats
(
	mach_port_t server,
	StatBlock *stats
);

/* Routine ClearStats */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_ClearStats
(
	mach_port_t server
);

/* Routine MapName */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_MapName
(
	mach_port_t server,
	uint8_t isUser,
	mstring name,
	guid_t *guid,
	audit_token_t *atoken
);

/* Routine GetGroups */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_GetGroups
(
	mach_port_t server,
	uint32_t uid,
	uint32_t *numGroups,
	GIDArray gids,
	audit_token_t *atoken
);

/* Routine ClearCache */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_ClearCache
(
	mach_port_t server
);

/* Routine DumpState */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_DumpState
(
	mach_port_t server
);

/* Routine GetAllGroups */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_GetAllGroups
(
	mach_port_t server,
	uint32_t uid,
	uint32_t *numGroups,
	GIDList *gids,
	mach_msg_type_number_t *gidsCnt,
	audit_token_t *atoken
);

/* Routine MapIdentifier */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t memberdDSmig_MapIdentifier
(
	mach_port_t server,
	int idType,
	pointer_t identifier,
	mach_msg_type_number_t identifierCnt,
	vm_offset_t ooidentifier,
	mach_msg_type_number_t ooidentifierCnt,
	guid_t *guid,
	audit_token_t *atoken
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__DSmemberdMIG_subsystem__defined
#define __Request__DSmemberdMIG_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kauth_identity_extlookup request;
	} __Request__MembershipCall_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__GetStats_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__ClearStats_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint8_t isUser;
		char isUserPad[3];
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[256];
	} __Request__MapName_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t uid;
	} __Request__GetGroups_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__ClearCache_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__DumpState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		uint32_t uid;
	} __Request__GetAllGroups_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t ooidentifier;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int idType;
		mach_msg_type_number_t identifierCnt;
		char identifier[16384];
		mach_msg_type_number_t ooidentifierCnt;
	} __Request__MapIdentifier_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__DSmemberdMIG_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__memberdDSmig_DSmemberdMIG_subsystem__defined
#define __RequestUnion__memberdDSmig_DSmemberdMIG_subsystem__defined
union __RequestUnion__memberdDSmig_DSmemberdMIG_subsystem {
	__Request__MembershipCall_t Request_memberdDSmig_MembershipCall;
	__Request__GetStats_t Request_memberdDSmig_GetStats;
	__Request__ClearStats_t Request_memberdDSmig_ClearStats;
	__Request__MapName_t Request_memberdDSmig_MapName;
	__Request__GetGroups_t Request_memberdDSmig_GetGroups;
	__Request__ClearCache_t Request_memberdDSmig_ClearCache;
	__Request__DumpState_t Request_memberdDSmig_DumpState;
	__Request__GetAllGroups_t Request_memberdDSmig_GetAllGroups;
	__Request__MapIdentifier_t Request_memberdDSmig_MapIdentifier;
};
#endif /* !__RequestUnion__memberdDSmig_DSmemberdMIG_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__DSmemberdMIG_subsystem__defined
#define __Reply__DSmemberdMIG_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		kauth_identity_extlookup request;
	} __Reply__MembershipCall_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		StatBlock stats;
	} __Reply__GetStats_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__ClearStats_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		guid_t guid;
	} __Reply__MapName_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		uint32_t numGroups;
		GIDArray gids;
	} __Reply__GetGroups_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__ClearCache_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__DumpState_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t gids;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32_t numGroups;
		mach_msg_type_number_t gidsCnt;
	} __Reply__GetAllGroups_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		guid_t guid;
	} __Reply__MapIdentifier_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__DSmemberdMIG_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__memberdDSmig_DSmemberdMIG_subsystem__defined
#define __ReplyUnion__memberdDSmig_DSmemberdMIG_subsystem__defined
union __ReplyUnion__memberdDSmig_DSmemberdMIG_subsystem {
	__Reply__MembershipCall_t Reply_memberdDSmig_MembershipCall;
	__Reply__GetStats_t Reply_memberdDSmig_GetStats;
	__Reply__ClearStats_t Reply_memberdDSmig_ClearStats;
	__Reply__MapName_t Reply_memberdDSmig_MapName;
	__Reply__GetGroups_t Reply_memberdDSmig_GetGroups;
	__Reply__ClearCache_t Reply_memberdDSmig_ClearCache;
	__Reply__DumpState_t Reply_memberdDSmig_DumpState;
	__Reply__GetAllGroups_t Reply_memberdDSmig_GetAllGroups;
	__Reply__MapIdentifier_t Reply_memberdDSmig_MapIdentifier;
};
#endif /* !__RequestUnion__memberdDSmig_DSmemberdMIG_subsystem__defined */

#ifndef subsystem_to_name_map_DSmemberdMIG
#define subsystem_to_name_map_DSmemberdMIG \
    { "MembershipCall", 60000 },\
    { "GetStats", 60001 },\
    { "ClearStats", 60002 },\
    { "MapName", 60003 },\
    { "GetGroups", 60004 },\
    { "ClearCache", 60005 },\
    { "DumpState", 60006 },\
    { "GetAllGroups", 60007 },\
    { "MapIdentifier", 60008 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _DSmemberdMIG_user_ */
