@class SSVPlatformContext, NSMapTable, NSDictionary, NSBundle, NSMutableArray, SKUIURL, SKUIStoreDialogController, SKUIURLBag, SKUITrendingSearchProvider, NSString, SUClientInterface, IKAppContext, NSOperationQueue, NSArray, SSURLBag, SKUIApplicationController, SKUILocalizedStringDictionary, NSCache;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {
    NSString *_additionalPurchaseParameters;
    NSBundle *_bundle;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_purchaseAffiliateIdentifier;
    long long _purchaseURLBagType;
    SKUIURLBag *_urlBag;
    SKUITrendingSearchProvider *_trendingSearchProvider;
    NSOperationQueue *_resourceLoadQueue;
}

@property (class, readonly, copy) NSString *_cachePath;

@property (readonly, nonatomic, getter=isBootstrapScriptFallbackDisabled) BOOL bootstrapScriptFallbackDisabled;
@property (weak, nonatomic, getter=_applicationController, setter=_setApplicationController:) SKUIApplicationController *_applicationController;
@property (readonly, nonatomic) NSCache *placeholderImageCache;
@property (readonly, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider;
@property (readonly, nonatomic) NSOperationQueue *resourceLoadQueue;
@property (readonly, nonatomic) Class moviePlayerViewControllerClass;
@property (readonly, nonatomic, getter=isMultiUser) BOOL multiUser;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, weak, nonatomic, getter=applicationController) SKUIApplicationController *applicationController;
@property (copy, nonatomic) NSString *navigationHistoryPersistenceKey;
@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, nonatomic) SSVPlatformContext *platformContext;
@property (retain, nonatomic, getter=_scriptAppContext, setter=_setScriptAppContext:) IKAppContext *_scriptAppContext;
@property (readonly, nonatomic) NSArray *navigationHistory;
@property (readonly, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic) long long userInterfaceIdiomOverride;
@property (readonly, nonatomic) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) SSURLBag *URLBag;
@property (copy, nonatomic) NSString *metricsConfigurationIdentifier;
@property (copy, nonatomic) SKUIURL *purchaseReferrerURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContext;
+ (id)_cachePathForStoreFrontIdentifier:(id)a0;
+ (id)_configurationDictionaryWithBagDictionary:(id)a0;
+ (id)_fallbackConfigurationDictionary;
+ (id)localizedStringForKey:(id)a0 inBundles:(id)a1;
+ (id)localizedStringForKey:(id)a0 inBundles:(id)a1 inTable:(id)a2;

- (id)localizedStringForKey:(id)a0;
- (void)dealloc;
- (id)valueForConfigurationKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;
- (id)SAPSessionForVersion:(long long)a0;
- (id)additionalRightBarButtonItemForDocumentContainerViewController:(id)a0;
- (id)_navigationHistory;
- (void)_setAdditionalPurchaseParameters:(id)a0;
- (void)_setPurchaseAffiliateIdentifier:(id)a0;
- (void)_setPurchaseURLBagType:(long long)a0;
- (void)_setValue:(id)a0 forConfigurationKey:(id)a1;
- (id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)a0;
- (id)additionalLeftBarButtonItemForViewController:(id)a0;
- (id)additionalRightBarButtonItemForViewController:(id)a0;
- (void)clientInterface:(id)a0 dispatchOnPageResponseWithData:(id)a1 response:(id)a2;
- (void)clientInterface:(id)a0 dispatchXEvent:(id)a1 completionBlock:(id /* block */)a2;
- (void)clientInterface:(id)a0 presentDialog:(id)a1;
- (void)customizePurchase:(id)a0;
- (void)customizeSoftwarePurchase:(id)a0;
- (id)documentViewControllerForTemplateViewElement:(id)a0;
- (id)existingBagValueForKey:(id)a0;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id /* block */)a0;
- (void)loadValueForConfigurationKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)localizedAlertWithError:(id)a0;
- (id)localizedStringForKey:(id)a0 inTable:(id)a1;
- (id)metricsPageContextForViewController:(id)a0;
- (id)modalDocumentViewControllerForDocument:(id)a0 options:(id)a1;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)a0;
- (id)newLoadStoreURLOperationWithURL:(id)a0;
- (id)newLoadStoreURLOperationWithURLRequest:(id)a0;
- (id)previewViewControllerForViewElement:(id)a0;
- (void)pushNavigationHistoryPageIdentifier:(id)a0;
- (id)scriptInterfaceForClientInterface:(id)a0;
- (void)sendAppPreviewStateChanged:(BOOL)a0;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize { double x0; double x1; })a0;
- (void)sendOnPageResponseWithDocument:(id)a0 data:(id)a1 URLResponse:(id)a2 performanceMetrics:(id)a3;
- (void)sendOnXEventWithDictionary:(id)a0 completionBlock:(id /* block */)a1;
- (void)setMetricsPageContext:(id)a0 forViewController:(id)a1;
- (BOOL)shouldForceTransientSearchControllerBahavior;
- (BOOL)storeViewController:(id)a0 shouldDisplayDefaultDarButton:(long long)a1;
- (BOOL)supportsRenderingVersion:(unsigned int)a0;
- (id)tabBarItemsForStyle:(long long)a0;
- (long long)tabBarStyleForWidth:(double)a0;

@end
