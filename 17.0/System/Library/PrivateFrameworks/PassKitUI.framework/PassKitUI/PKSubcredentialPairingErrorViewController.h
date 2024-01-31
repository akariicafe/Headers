@class NSString, PKExplanationView, PKSubcredentialPairingFlowControllerContext;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {
    PKExplanationView *_explanationView;
    BOOL _isAdvancing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_error;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelButtonPressed;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (BOOL)_translateErrorCode:(long long)a0 toTitleText:(id *)a1 bodyText:(id *)a2;
- (void)configureExplanationViewWithError:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
