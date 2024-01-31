@class MADRemoveBackgroundMatteRequest, VCPMADServiceImageAsset;

@interface MADImageRemoveBackgroundMatteTask : MADImageRemoveBackgroundTask <VCPMADServiceImageProcessingSubtaskProtocol> {
    MADRemoveBackgroundMatteRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

@end
