@class RBSProcessIdentity, RBSProcessBundle, NSObject, RBSProcessMonitor, BSProcessHandle, RBSProcessInstance, NSString, RBSProcessState, BSAuditToken, RBSMachPortTaskNameRight, RBSProcessExitContext, RBSProcessLimitations, NSUUID;
@protocol OS_xpc_object;

@interface RBSProcessHandle : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding> {
    RBSMachPortTaskNameRight *_taskPort;
    RBSProcessMonitor *_monitor;
    BSProcessHandle *_legacyHandle;
    NSObject<OS_xpc_object> *_codedHandle;
    BSAuditToken *_bsAuditToken;
    unsigned long long _data;
    NSString *_cachedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RBSProcessInstance *instance;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBSProcessBundle *bundle;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) RBSProcessState *currentState;
@property (readonly, nonatomic) RBSProcessExitContext *lastExitContext;
@property (readonly, nonatomic) RBSProcessLimitations *activeLimitations;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, nonatomic, getter=hasConsistentLaunchdJob) BOOL consistentLaunchdJob;
@property (readonly, copy, nonatomic) NSString *consistentJobLabel;
@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) RBSProcessHandle *hostProcess;
@property (readonly, nonatomic, getter=isApplication) BOOL application;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentProcess;
+ (id)handleForIdentifier:(id)a0 error:(out id *)a1;
+ (id)observeForImminentAssertionsExpiration:(id /* block */)a0;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)handleForLegacyHandle:(id)a0 error:(out id *)a1;
+ (id)handleForPredicate:(id)a0 error:(out id *)a1;
+ (id)handleForKey:(unsigned long long)a0 fetchIfNeeded:(BOOL)a1;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0;
- (int)rbs_pid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isManaged;
- (void)monitorForDeath:(id /* block */)a0;
- (id)currentStateMatchingDescriptor:(id)a0;
- (double)elapsedCPUTimeForFrontBoard;
- (void)fullEncode:(id)a0 forKey:(id)a1;
- (id)initWithInstance:(id)a0 auditToken:(id)a1 bundleData:(id)a2 manageFlags:(unsigned char)a3 beforeTranslocationBundlePath:(id)a4 executablePath:(id)a5 cache:(BOOL)a6;
- (id)initWithLaunchContext:(id)a0;
- (void)intendToExitWith:(id)a0;
- (id)legacyHandle;

@end
