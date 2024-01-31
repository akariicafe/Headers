@class WBSPhishingURLClassifierConfigurationOverrideAdapter, WBSPhishingConfiguration, WBSPhishingURLClassifierCache, NSObject;
@protocol WBSPhishingAssetControllerProtocol, WBSPhishingClassifierControllerDelegate, WBSPhishingImageClassifierModelProtocol, WBSPhishingURLClassifier, OS_dispatch_queue;

@interface WBSPhishingClassifierController : NSObject <WBSPhishingAssetControllerDelegate, WBSPhishingClassifier> {
    NSObject<OS_dispatch_queue> *_queue;
    WBSPhishingURLClassifierCache *_cache;
    WBSPhishingURLClassifierConfigurationOverrideAdapter *_configurationAdapter;
    id<WBSPhishingURLClassifier> _root;
    id<WBSPhishingAssetControllerProtocol> _assetController;
    id<WBSPhishingImageClassifierModelProtocol> _model;
    WBSPhishingConfiguration *_configuration;
}

@property (class, readonly, getter=isDisabled) BOOL disabled;

@property (weak) id<WBSPhishingClassifierControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)classifyURL:(id)a0 image:(id)a1 completionHandler:(id /* block */)a2;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)classifyURL:(id)a0 webView:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAssetController:(id)a0 history:(id)a1 crowdsourcedFeedbackAllowList:(id)a2;
- (id)initWithHistory:(id)a0 crowdsourcedFeedbackAllowList:(id)a1;
- (void)phishingAssetController:(id)a0 didFailCatalogDownload:(id)a1;
- (void)phishingAssetController:(id)a0 didFailDownload:(id)a1;
- (void)phishingAssetController:(id)a0 didFailLoad:(id)a1;
- (void)phishingAssetController:(id)a0 didFailModelInitialization:(id)a1;
- (void)phishingAssetController:(id)a0 didLoadImageClassifierModel:(id)a1 configuration:(id)a2;
- (void)setClassification:(unsigned long long)a0 forURL:(id)a1;
- (void)takeSnapshotForWebView:(id)a0 completionHandler:(id /* block */)a1;

@end
