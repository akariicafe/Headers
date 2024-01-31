@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, LDCMMobileAssetManagerDelegate;

@interface LDCMMobileAssetManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetManagerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) int lastProcessedAssetVersion;
@property (nonatomic) unsigned int queryFrequencySec;
@property (nonatomic) unsigned int queryFrequencyToleranceSec;
@property (nonatomic) unsigned int retryQueryFrequencySec;
@property (nonatomic) unsigned int retryQueryFrequencyToleranceSec;
@property (weak, nonatomic) id<LDCMMobileAssetManagerDelegate> delegate;

- (id)init;
- (void)updateMetadata;
- (void).cxx_destruct;
- (void)queryMetadata;
- (void)processAsset:(id)a0;
- (void)downloadCatalog;
- (void)downloadAsset:(id)a0;
- (void)scheduleNextQueryAsRetry:(BOOL)a0;
- (BOOL)supportsCompatabilityVersion:(int)a0;

@end
