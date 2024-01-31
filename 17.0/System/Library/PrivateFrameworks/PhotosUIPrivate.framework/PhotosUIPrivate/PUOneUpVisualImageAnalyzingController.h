@class NSObject, NSString, PXVisualIntelligenceManager, PUBrowsingViewModel;
@protocol OS_dispatch_queue;

@interface PUOneUpVisualImageAnalyzingController : NSObject <PUBrowsingViewModelChangeObserver>

@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly, nonatomic) PXVisualIntelligenceManager *visualImageManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadVideoFrameQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setVisualImageAnalysis:(id)a0 forAssetViewModel:(id)a1;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (id)initWithBrowsingViewModel:(id)a0;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)a0;
- (void).cxx_destruct;
- (void)_requestVKImageAnalysisForAssetViewModel:(id)a0;
- (void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)a0;

@end
