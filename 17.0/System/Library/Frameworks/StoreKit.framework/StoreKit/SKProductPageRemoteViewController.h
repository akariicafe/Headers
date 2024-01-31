@class NSString;
@protocol SKProductPageRemoteViewControllerDelegate;

@interface SKProductPageRemoteViewController : _UIRemoteViewController <SKProductPageExtensionClientInterface, ServiceProductPage>

@property (weak, nonatomic) id<SKProductPageRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)finishImmediately;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setClientIdentifier:(id)a0;
- (void)setPreview:(id)a0;
- (void)setRightBarButtonTitle:(id)a0;
- (id)extensionProxy;
- (void)setAffiliateIdentifier:(id)a0;
- (void)setScriptContextDictionary:(id)a0;
- (void)loadDidFinish;
- (void)setAskToBuy:(BOOL)a0;
- (void)setCancelButtonTitle:(id)a0;
- (void)finishStarRatingPromptWithRating:(id)a0;
- (void)finishWithResult:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)loadProductWithPageDictionary:(id)a0;
- (void)loadProductWithRequest:(id)a0;
- (void)loadProductWithURL:(id)a0;
- (void)setAdditionalBuyParameters:(id)a0;
- (void)setProductPageStyle:(id)a0;
- (void)setPromptString:(id)a0;
- (void)setShowsRightBarButton:(BOOL)a0;
- (void)setShowsStoreButton:(BOOL)a0;
- (void)setUsageContext:(id)a0;
- (void)setVisibleInClientWindow:(id)a0;
- (void)setupWithClientBundleID:(id)a0 bagType:(long long)a1;

@end
