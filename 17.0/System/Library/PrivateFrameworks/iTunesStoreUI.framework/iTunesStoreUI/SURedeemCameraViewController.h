@class SURedeemCodeTextField, NSString, UIActivityIndicatorView, SUCodeRedeemerController, UIView, UIBarButtonItem;

@interface SURedeemCameraViewController : UIViewController <SUCodeRedeemerControllerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) SUCodeRedeemerController *cameraController;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIBarButtonItem *redeemBarButton;
@property (retain, nonatomic) SURedeemCodeTextField *codeTextField;
@property (retain, nonatomic) UIBarButtonItem *toggleCameraBarButton;
@property (nonatomic) BOOL ignoreDefaultKeyboardNotifications;
@property (copy, nonatomic) id /* block */ codeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)_setupNotifications;
- (void)_updateState;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cancelButtonAction;
- (void)_showOverlay;
- (void)_setupNavigationItem;
- (void)performAction:(long long)a0 withObject:(id)a1;
- (void)_recognitionError;
- (void)_startActivityIndicator;
- (void)codeRedeemerControllerDidCancel;
- (void)_detectedCode:(id)a0;
- (void)_dismissKeyboard;
- (void)_hideOverlay;
- (void)_layoutCodeTextField;
- (void)_layoutCodeTextFieldWithNotification:(id)a0;
- (void)_overlayTapAction;
- (void)_pauseCamera;
- (void)_presentCameraErrorAlert;
- (void)_recognitionSuccess;
- (void)_redeemButtonAction;
- (void)_resumeCamera;
- (void)_setBackButtonTitle:(id)a0;
- (void)_setupActivityIndicator;
- (void)_setupCameraController;
- (void)_setupCodeTextField;
- (void)_setupOverlayView;
- (void)_startCameraController;
- (void)_stopAcitivityIndicator;
- (void)_stopCameraController;
- (void)_toggleCameraButtonAction;
- (void)_updateNavigationItemAnimated;
- (void)codeRedeemerControllerDidEndWithCode:(id)a0 error:(id)a1;

@end
