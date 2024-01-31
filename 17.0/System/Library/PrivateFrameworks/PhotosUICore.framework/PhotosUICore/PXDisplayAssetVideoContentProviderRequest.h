@class NSArray, NSObject, PXMediaProvider;
@protocol PXDisplayAssetVideoContentProviderRequestDelegate, OS_dispatch_queue, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject {
    long long _requestID;
    BOOL _isCancelled;
    BOOL _shouldDownloadTimeRange;
    long long _retriesAfterTransientErrorCount;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) NSArray *strategies;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) BOOL requestURLOnly;
@property (readonly, nonatomic) double loadingProgress;
@property (weak, nonatomic) id<PXDisplayAssetVideoContentProviderRequestDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;

+ (id)startRequestWithAsset:(id)a0 mediaProvider:(id)a1 strategies:(id)a2 priority:(long long)a3 requestURLOnly:(BOOL)a4 delegate:(id)a5 loadingQueue:(id)a6;

- (void)_start;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)_handleLoadedPlayerItem:(id)a0 videoURL:(id)a1 info:(id)a2 strategyAtIndex:(long long)a3;
- (void)_handleLoadingProgress:(double)a0;
- (BOOL)_isTransientError:(id)a0;
- (void)_loadMediaWithStrategyAtIndex:(long long)a0;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 strategies:(id)a2 priority:(long long)a3 requestURLOnly:(BOOL)a4 delegate:(id)a5 loadingQueue:(id)a6;

@end
