@class PLPhotoAnalysisServiceClient, NSDictionary, PHPhotoLibrary, PXDiscoveryFeedGenerationOptions;

@interface PXDiscoveryFeedGenerationSession : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PXDiscoveryFeedGenerationOptions *_options;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    NSDictionary *_sessionState;
}

- (void).cxx_destruct;
- (id)_assetCollectionWithAsset:(id)a0;
- (id)additionaItemsWithTargetCount:(unsigned long long)a0;
- (id)initWithPhotoLibrary:(id)a0 options:(id)a1;

@end
