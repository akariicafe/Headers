@class NSHashTable, CKDTokenRegistrationScheduler, NSURL, CKSQLiteDatabase, CKDThrottleManager, CKDLogicalDeviceScopedStateManager, CKDAccountDataSecurityObserver, CKDMetadataCache, CKDOperationInfoCache;
@protocol CKDTestDeviceProtocol, CKTestDeviceReferenceProtocol, CKDTestServerProtocol;

@interface CKDLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (retain, nonatomic) NSHashTable *sharedPcsCaches;
@property (readonly) id<CKTestDeviceReferenceProtocol> testDeviceReference;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;
@property (readonly, nonatomic) id<CKDTestServerProtocol> testServer;
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) CKDMetadataCache *metadataCache;
@property (readonly, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (readonly, nonatomic) CKDThrottleManager *throttleManager;
@property (readonly, nonatomic) CKSQLiteDatabase *deviceScopedDatabase;
@property (readonly, weak, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (readonly, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (readonly, nonatomic) long long pushBehavior;

+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)defaultContext;
+ (id)existingDefaultContext;

- (void).cxx_destruct;
- (id)deviceScopedPushTopic:(id)a0;
- (void)clearPCSMemoryCaches;
- (id)_initWithTestDeviceReference:(id)a0;
- (id)pcsCacheForContainerID:(id)a0 accountOverrideInfo:(id)a1 accountID:(id)a2 encryptionServiceName:(id)a3;

@end
