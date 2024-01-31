@class SUClientInterface, NSString, UIActivityIndicatorView, SUUIClientContext, SUUIRedeemConfiguration, NSOperationQueue, UIViewController;
@protocol SUUIRedeemViewCameraOverrideDelegate;

@interface SUUIRedeemViewController : UINavigationController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIViewController *embeddedViewController;
@property (nonatomic) BOOL finishedLoading;
@property (retain, nonatomic) SUUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) BOOL shouldPerformInitialOperationOnAppear;
@property (readonly, nonatomic) long long category;
@property (nonatomic) BOOL attempsAutomaticRedeem;
@property (weak, nonatomic) id<SUUIRedeemViewCameraOverrideDelegate> cameraDelegate;
@property (copy, nonatomic) NSString *initialCode;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic) BOOL cameraRedeemVisible;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (BOOL)redeemRequiresNationalId:(id)a0;

- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)_setChildViewController:(id)a0;
- (void)_cancelButtonAction;
- (void)_setupNavigationItem;
- (id)initWithRedeemCategory:(long long)a0;
- (void)_presentLegacyRedeem;
- (void)_presentModernRedeemWithURL:(id)a0;
- (void)_redeemURLWithCompletion:(id /* block */)a0;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (void)clientInterfaceDidFinishLoading:(id)a0;

@end
