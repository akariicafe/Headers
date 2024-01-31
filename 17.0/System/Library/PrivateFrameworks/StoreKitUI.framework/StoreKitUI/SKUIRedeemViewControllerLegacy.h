@class SKUIRedeemConfiguration, NSString, SKUIClientContext, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemStepViewController, UIBarButtonItem;
@protocol SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemViewControllerLegacy : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate> {
    char _cameraRedeemEnabled;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemStepViewController *_inputViewController;
    long long _initialBarStyle;
}

@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (readonly, nonatomic) long long category;
@property (nonatomic) BOOL attempsAutomaticRedeem;
@property (weak, nonatomic) id<SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;
@property (copy, nonatomic) NSString *initialCode;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) BOOL cameraRedeemVisible;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) BOOL shouldPerformInitialOperationOnAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)redeemRequiresNationalId:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_cancelButtonAction:(id)a0;
- (id)initWithRedeemCategory:(long long)a0;
- (void)_showNationalIdVerificationPage;
- (void)_attemptAutomaticRedeemWithMetadata:(id)a0;
- (void)_executeIdValidationOperationWithFields:(id)a0;
- (void)_executePreflightOperationForcesAuthentication:(BOOL)a0;
- (void)_executeRequiresIdValidationOperation;
- (void)_finishPreflightWithResult:(id)a0;
- (void)_loadInputViewController;
- (id)_newInputViewController;
- (void)_performInitialRedeemOperation;
- (void)_showInputViewController;
- (void)_showNationalIdLoadingPage;
- (void)redeemAgainAnimated:(BOOL)a0;
- (void)redeemIdViewController:(id)a0 submittedWithFields:(id)a1;
- (void)redeemIdViewControllerDidCancel:(id)a0;
- (void)redeemStepViewControllerShouldValidateNationalID:(id)a0;

@end
