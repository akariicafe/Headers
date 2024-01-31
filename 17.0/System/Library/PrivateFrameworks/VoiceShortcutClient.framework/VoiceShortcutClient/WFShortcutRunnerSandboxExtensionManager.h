@class NSMutableSet;

@interface WFShortcutRunnerSandboxExtensionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) WFShortcutRunnerSandboxExtensionManager *sharedManager;

@property (readonly, nonatomic) NSMutableSet *issuedExtensionsAccessResources;
@property (readonly, nonatomic) NSMutableSet *issuedExtensionHandlers;
@property (readonly, nonatomic) NSMutableSet *resignedExtensionsAccessResources;

- (id)init;
- (id)synchronousRemoteDataStoreWithErrorHandler:(id /* block */)a0;
- (id)asynchronousRemoteDataStoreWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performWithSandboxExtensions:(id)a0 asynchronousBlock:(id /* block */)a1;
- (void)performWithSandboxExtensions:(id)a0 synchronousBlock:(id /* block */)a1;
- (void)requestExtensionTokensForAccessResources:(id)a0 completion:(id /* block */)a1;
- (id)requestExtensionTokensForAccessResources:(id)a0 rejectedAccessResources:(id *)a1 error:(id *)a2;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 completion:(id /* block */)a1;
- (BOOL)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 error:(id *)a1;
- (void)resignIssuedExtensionsWithReason:(id)a0;
- (BOOL)retakeResignedExtensionsWithReason:(id)a0 error:(id *)a1;
- (void)temporaryRequestSandboxExtensionWithBlock:(id /* block */)a0;

@end
