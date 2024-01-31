@class NSObject, NSString, NSPredicate, ATAssetLinkController, NSMutableOrderedSet, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver> {
    NSMutableOrderedSet *_remainingAssets;
    NSMutableSet *_failedAssets;
    unsigned long long _recentFailedArrayIndex;
    NSMutableSet *_currentAssets;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelAtStart;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _waitingForRetry;
}

@property (readonly, copy, nonatomic) NSString *dataClass;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) id /* block */ shouldRetryAssetBlock;
@property (retain, nonatomic) ATAssetLinkController *assetLinkController;
@property (nonatomic) BOOL retryUntilFinished;
@property (readonly, nonatomic) unsigned long long failedAssetsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)suspend;
- (void)start;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)_finishAsset:(id)a0 withError:(id)a1;
- (id)initWithAssets:(id)a0;
- (id)remainingAssets;
- (void)cancelAllAssets;
- (id)_initWithDataClass:(id)a0 assets:(id)a1;
- (id)initWithDataClass:(id)a0;
- (id)sessionGroupingKey;

@end
