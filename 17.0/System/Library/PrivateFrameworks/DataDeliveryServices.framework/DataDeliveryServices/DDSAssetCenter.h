@class NSSet, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol DDSAssetObserving, DDSAssetProviding, OS_dispatch_queue, DDSTrialManager;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSTrialManagerDelegate, DDSAssetObservingDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_delegates;
}

@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) id<DDSTrialManager> trialManager;
@property (readonly) NSSet *delegates;
@property (readonly) NSMutableDictionary *managerInterfaceByAssetType;
@property (readonly, copy) NSSet *managerInterfaces;
@property (readonly, copy) id /* block */ createXPCInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setUpTrialForQuery:(id)a0;
- (void)registerDelegate:(id)a0;
- (id)assetsForQuery:(id)a0 error:(id *)a1;
- (id)init;
- (void)addAssertionForAssetsWithQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)setAssetTypesForDelegates:(id)a0;
- (id)assertionIDsForClientID:(id)a0;
- (void)start;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)triggerDump;
- (void)unregisterDelegate:(id)a0;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)setXPCServiceName:(id)a0 forAssetType:(id)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 trialManager:(id)a2 createXPCInterface:(id /* block */)a3;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (void)removeAssertionWithIdentifier:(id)a0;
- (void)trialDidStopForQuery:(id)a0;
- (void).cxx_destruct;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)trialDidReceiveAsset:(id)a0 forQuery:(id)a1;
- (void)setCompatabilityVersion:(long long)a0 forAssetType:(id)a1;
- (void)triggerUpdate;
- (id)managerInterfaceForAssetType:(id)a0;
- (id)assertionIDsForClientID:(id)a0 assetType:(id)a1;
- (void)removeAssertionWithIdentifier:(id)a0 assetType:(id)a1;
- (void)fetchTrialAssetForQuery:(id)a0 callback:(id /* block */)a1;

@end
