@class NSObject;
@protocol OS_dispatch_queue;

@interface MCMDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *protectionOperationFileQueue;

+ (id)defaultManager;

- (id)init;
- (void)setDataProtectionOnDataContainerForMetadata:(id)a0 isSecondOrThirdPartyApp:(BOOL)a1 retryIfLocked:(BOOL)a2 deferUntilNextLaunch:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)_startDataProtectionChangeOperation:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)restartPendingDataProtectionOperationsWithError:(id *)a0;
- (int)desiredDataProtectionClassForMetadata:(id)a0 clientIdentity:(id)a1;
- (void).cxx_destruct;
- (int)intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)a0 clientIdentity:(id)a1 containerClass:(unsigned long long)a2 info:(id)a3;

@end
