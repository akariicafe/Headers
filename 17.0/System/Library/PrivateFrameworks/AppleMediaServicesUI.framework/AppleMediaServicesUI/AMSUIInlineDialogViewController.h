@class NSString, AMSDialogRequest, AMSUIAppearance, NSDictionary, AMSBinaryPromise, ACAccount, UIViewController, AMSEngagement;
@protocol AMSBagProtocol, AMSUIMessageViewControllerDelegate, AMSUIMessageViewController;

@interface AMSUIInlineDialogViewController : UIViewController <AMSUIMessageViewControllerDelegate, AMSEngagementObserver, AMSUIMessageViewController>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSEngagement *engagement;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest;
@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) UIViewController<AMSUIMessageViewController> *childContentController;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIAppearance *preferredAppearance;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1;
- (void)messageViewController:(id)a0 enqueueEventWithFields:(id)a1 inTopic:(id)a2;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)loadView;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (id)initWithRequest:(id)a0;
- (id)initWithServiceType:(id)a0 placement:(id)a1 context:(id)a2;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)initWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2 account:(id)a3 context:(id)a4;
- (id)_dialogView;
- (void)enqueueImpressionMetrics;
- (void)messageViewController:(id)a0 didLoadDialogRequest:(id)a1;
- (BOOL)messageViewController:(id)a0 shouldEnqueueMetricsForDialogResult:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;
- (void)setPreferredAppearance:(id)a0;
- (void)_didFailToFetchWithError:(id)a0;
- (void)_didFetchResponse:(id)a0;
- (id)_findDialogRequestInResponse:(id)a0;
- (void)_setContentController:(id)a0;
- (void)_setDialogRequest:(id)a0;
- (void)_setDialogRequestBanner:(id)a0;
- (void)_setDialogRequestBubbleTip:(id)a0;
- (void)_setDialogRequestDashboardMessage:(id)a0;
- (void)_setupEngagement;
- (void)_tearDownContentView;
- (id)preferredAppearance;

@end
