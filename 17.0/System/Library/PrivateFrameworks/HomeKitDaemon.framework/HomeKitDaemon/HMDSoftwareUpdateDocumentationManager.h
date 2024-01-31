@class HMFNetMonitor, NSArray, NSString, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetMonitor *_netMonitor;
    NSMutableOrderedSet *_assets;
}

@property (class, readonly) HMDSoftwareUpdateDocumentationManager *sharedManager;

@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) NSArray *assets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (id)assetForDocumentationMetadata:(id)a0;
- (void).cxx_destruct;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (void)networkMonitorIsReachable:(id)a0;
- (void)auditAsset:(id)a0;
- (void)parseCachedAssets;
- (void)registerDocumentationMetadata:(id)a0;
- (void)unregisterDocumentationMetadata:(id)a0;

@end
