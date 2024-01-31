@class NSString, NSSet, NSMutableDictionary, NSNumber;

@interface BMProcess : NSObject {
    NSString *_executablePath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entitlementCacheLock;
    NSMutableDictionary *_entitlementCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnCoreDuetAccessLock;
    NSNumber *_reliesOnCoreDuetAccess;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _machLookupCacheLock;
    NSMutableDictionary *_machLookupCache;
}

@property (readonly, nonatomic) unsigned long long processType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) BOOL isSandboxed;
@property (readonly, nonatomic) BOOL isLegacyAppleInternalClient;
@property (readonly, nonatomic) NSSet *useCases;

+ (id)current;
+ (id)processWithXPCConnection:(id)a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (BOOL)_canTrustApplicationIdentifierEntitlement;
- (void)cacheValuesForEntitlements:(id)a0;
- (id)dictionaryForEntitlement:(id)a0;
- (BOOL)hasNonEmptyArrayForEntitlement:(id)a0;
- (void)_initializeProcessProperties;
- (id)nonnullArrayForEntitlement:(id)a0;
- (BOOL)canPerformGlobalMachLookup:(id)a0 report:(BOOL)a1;
- (id)nonnullSetOfStringsForEntitlement:(id)a0;
- (id)stringForEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)hasNonEmptyDictionaryForEntitlement:(id)a0;
- (BOOL)canPerformSyscall:(id)a0 report:(BOOL)a1;
- (BOOL)canPerformFileOperation:(id)a0 onPath:(id)a1 report:(BOOL)a2;
- (BOOL)boolForEntitlement:(id)a0;

@end
