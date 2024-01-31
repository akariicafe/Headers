@class PUPickerConfiguration, VCPMediaAnalysisService;

@interface PUPickerOnDemandProcessor : NSObject

@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) VCPMediaAnalysisService *service;
@property (nonatomic) int stickerScoringRequestID;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_performOnDemandStaticStickerScoringProcessingForRecentAssets:(id /* block */)a0;
- (void)performOnDemandProcessingWithCanDisplayUserInterfaceHandler:(id /* block */)a0;

@end
