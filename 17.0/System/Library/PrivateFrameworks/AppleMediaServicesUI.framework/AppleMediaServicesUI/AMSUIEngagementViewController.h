@class AMSEngagementRequest, NSString, AMSBagKeySet, AMSPromise, AMSProcessInfo, UIViewController;
@protocol AMSBagProtocol, AMSUIEngagementViewControllerDelegate;

@interface AMSUIEngagementViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) UIViewController *childController;
@property (retain, nonatomic) AMSPromise *loadVCPromise;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) id<AMSUIEngagementViewControllerDelegate> delegate;
@property (readonly, nonatomic) AMSEngagementRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)viewWillAppear:(BOOL)a0;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)_dismiss;
- (long long)_modalPresentationStyle;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)dynamicViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)dynamicViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewController:(id)a0 handleDelegateAction:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (id)_preloadChildVC;
- (id)_isOriginatingURLTrusted;
- (BOOL)_isURLTrusted:(id)a0 inDomains:(id)a1;
- (void)_receivedCarrierLinkResult:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_setupContentSize;
- (void)_startEngagement;
- (void)_updateChildViewController:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 delegate:(id)a2;
- (id)requestIsSupported;
- (void)resolveWithResult:(id)a0 error:(id)a1;

@end
