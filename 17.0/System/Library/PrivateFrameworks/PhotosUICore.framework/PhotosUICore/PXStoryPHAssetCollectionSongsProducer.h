@class NSObject, PXStoryConfiguration, PHAssetCollection, PXStoryPhotoKitMusicCurationProvider;
@protocol OS_os_log, OS_dispatch_queue;

@interface PXStoryPHAssetCollectionSongsProducer : NSObject <PXStorySongsProducer> {
    NSObject<OS_dispatch_queue> *_queue;
    PXStoryPhotoKitMusicCurationProvider *_curationProvider;
    PXStoryConfiguration *_configuration;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (void)_handleAppleMusicCapabilityStatus:(long long)a0 error:(id)a1 curationResult:(id)a2 resultHandler:(id /* block */)a3;
- (void)_handleMusicCurationResult:(id)a0 signpostID:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)initWithAssetCollection:(id)a0 configuration:(id)a1 curationProvider:(id)a2;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
