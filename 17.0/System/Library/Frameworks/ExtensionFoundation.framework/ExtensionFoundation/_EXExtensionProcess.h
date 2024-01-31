@class NSString, _EXExtensionProcessHandle, _EXHostConfiguration;

@interface _EXExtensionProcess : NSObject <RBSProcessIdentifier, _EXExtensionProcessObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ invalidationHandler;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationHandlerLock;
@property (readonly) int pid;
@property (retain) _EXExtensionProcessHandle *internalExtensionProcess;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly) _EXHostConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionProcessWithConfiguration:(id)a0 error:(id *)a1;
+ (void)extensionProcessWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_extensionProcessBackgroundQueue;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)invalidate;
- (id)newXPCConnectionWithError:(id *)a0;
- (void)processDidInvalidate:(id)a0;
- (id)initWithInternalExtensionProcess:(id)a0 invalidationHandler:(id /* block */)a1;
- (int)rbs_pid;
- (void).cxx_destruct;
- (id)initWithInternalExtensionProcess:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;

@end
