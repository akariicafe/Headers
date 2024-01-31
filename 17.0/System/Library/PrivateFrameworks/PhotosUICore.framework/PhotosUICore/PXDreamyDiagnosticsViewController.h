@class PHAsset, NSURL;

@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController

@property (retain, nonatomic) PHAsset *variantAsset;
@property (retain, nonatomic) NSURL *variantVideoURL;
@property (nonatomic) int variantVideoRequestID;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_loadAndCacheVariantAssetWithError:(id *)a0;
- (void)_loadAndCacheVariantVideoURLFromAsset:(id)a0 completion:(id /* block */)a1;
- (id)inputVideoButtonsTitle;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareVariantVideoWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarTitle;
- (BOOL)useVariantVideoByDefaultInToggle;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;

@end
