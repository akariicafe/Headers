@protocol MCMCommandContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMCommandContext> context;

+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;
+ (id)sharedClientConnection;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (id)init;
- (void)containerManagerSetup;
- (void)_cleanupOprhanedCodeSigningMappingData;
- (void)_resumeDeleteOperations;
- (id)clientBundleIdentifier;
- (id)initWithContext:(id)a0;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1 forUserIdentity:(id)a2;
- (id)_commandForResumedDeleteOperationsWithResultPromise:(id)a0;
- (void).cxx_destruct;
- (void)rebootContainerManagerSetup;
- (void)_regenerateAllSystemContainerPaths;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;

@end
