@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, AMSPromise, UIViewController, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTaskViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) UIViewController *childController;
@property (retain, nonatomic) AMSPromise *childPromise;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL presented;
@property (retain, nonatomic) AMSEngagementRequest *request;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (nonatomic) BOOL ignoresDismissDetection;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)dealloc;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)_modalPresentationStyle;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (id)startEngagement;
- (void)_finishWithResultInfo:(id)a0 error:(id)a1;
- (id)_isOriginatingURLTrusted;
- (BOOL)_isURLTrusted:(id)a0 inDomains:(id)a1;
- (id)_preloadChild;
- (void)_receivedCarrierLinkResult:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_setupContentSize;
- (void)_updateChildViewController:(id)a0;
- (id)_viewControllerForType:(id)a0;
- (id)canPresent;

@end
