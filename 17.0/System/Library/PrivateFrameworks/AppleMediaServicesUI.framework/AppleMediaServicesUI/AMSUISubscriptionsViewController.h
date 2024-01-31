@class AMSUIWebViewController, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) AMSUIWebViewController *webViewController;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) NSString *subscriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)viewWillAppear:(BOOL)a0;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setChildViewController:(id)a0;
- (void)_setupLayout;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void)_startLoading;
- (void)_setupChildViewController;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;

@end
