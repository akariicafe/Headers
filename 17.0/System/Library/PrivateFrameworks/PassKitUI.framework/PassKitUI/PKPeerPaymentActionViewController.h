@class PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentWebService, PKPeerPaymentAccountFeatureDescriptor, PKPeerPaymentActionController, NSDecimalNumber, NSString;
@protocol PKPeerPaymentActionViewControllerDelegate, PKPassLibraryDataProvider;

@interface PKPeerPaymentActionViewController : UIViewController <PKPeerPaymentActionControllerDelegate> {
    BOOL _viewHasAppeared;
    BOOL _dismissingViewController;
}

@property (weak, nonatomic) id<PKPeerPaymentActionViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPassLibraryDataProvider> passLibraryDataProvider;
@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentActionController *actionController;
@property (nonatomic) unsigned long long controllerAction;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PKPeerPaymentAccountFeatureDescriptor *feature;
@property (copy, nonatomic) NSDecimalNumber *currentAmount;
@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (nonatomic) BOOL showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationBarBackgroundColor;
+ (id)peerPaymentActionViewControllerForAction:(unsigned long long)a0 paymentPass:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 context:(long long)a4;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (id)_cancelBarButton;
- (void)_cancelButtonPressed:(id)a0;
- (void)_cancelledAction;
- (void)_handleApplicationDidBecomeActiveNotification:(id)a0;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)a0;
- (void)_performedAction;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (void)peerPaymentActionController:(id)a0 requestPresentViewController:(id)a1;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)presentationSceneBundleIdentifierForPeerPaymentActionController:(id)a0;
- (id)presentationSceneIdentifierForPeerPaymentActionController:(id)a0;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)willDismissViewController;

@end
