@class NSString;

@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface>

@property (nonatomic) BOOL showsStoreButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *rightBarButtonTitle;
@property (nonatomic) BOOL showsRightBarButton;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) BOOL askToBuy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)setPreview:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)loadDidFinish;
- (id)_createNavigationItem;
- (BOOL)_isClientEntitled;
- (void)_setAskToBuy:(BOOL)a0;
- (void)_setCancelButtonTitle:(id)a0;
- (void)_setPromptString:(id)a0;
- (void)_setRightBarButtonTitle:(id)a0;
- (void)_setShowsRightBarButton:(BOOL)a0;
- (void)_setShowsStoreButton:(BOOL)a0;
- (void)_setUsageContext:(id)a0;
- (void)_setupWithClientBundleID:(id)a0 bagType:(long long)a1;
- (void)clientLookupItemDidLoad:(id)a0 parameters:(id)a1;
- (void)finishWithResult:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)lookupItemDidLoad:(id)a0 parameters:(id)a1;
- (void)rightBarButtonPressed:(id)a0;
- (void)setUsageContext:(id)a0;
- (void)setVisibleInClientWindow:(id)a0;
- (void)setupWithClientBundleID:(id)a0;
- (void)setupWithClientBundleID:(id)a0 bagType:(long long)a1;
- (void)setupWithCustomNavigationItem:(id)a0 promptString:(id)a1 askToBuy:(BOOL)a2;
- (void)storeButtonPressed:(id)a0;

@end
