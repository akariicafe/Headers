@class NSString, CRCodeRedeemerController, SUUIRedeem, UIBarButtonItem;
@protocol SUUIRedeemViewCameraOverrideDelegate, SUUIRedeemCameraViewControllerDelegate;

@interface SUUIRedeemCameraViewController : SUUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SUUIRedeemCameraViewDelegate, SUUIRedeemCameraViewControllerDelegate> {
    BOOL _alreadyPushed;
    CRCodeRedeemerController *_camera;
    UIBarButtonItem *_redeemButton;
    UIBarButtonItem *_flipButton;
    UIBarButtonItem *_activityBarButtonItem;
    SUUIRedeem *_successfulRedeem;
    BOOL _fullscreen;
}

@property (readonly, nonatomic) long long category;
@property (copy, nonatomic) NSString *initialCode;
@property (weak, nonatomic) id<SUUIRedeemCameraViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SUUIRedeemViewCameraOverrideDelegate> cameraOverrideDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)contentScrollView;
- (void)loadView;
- (void).cxx_destruct;
- (void)_setEnabled:(BOOL)a0;
- (BOOL)_enabled;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)_cancelAction:(id)a0;
- (id)initWithRedeemCategory:(long long)a0;
- (void)performRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 completion:(id /* block */)a2;
- (void)redeemCameraViewController:(id)a0 didFinishWithRedeem:(id)a1;
- (void)_cameraRedeemDidFinish:(id)a0 error:(id)a1;
- (void)_flipAction:(id)a0;
- (void)_performRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 allowOverride:(BOOL)a2 completion:(id /* block */)a3;
- (void)_redeemAction:(id)a0;
- (void)_redeemDidFinish:(id)a0 error:(id)a1;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)a0;
- (void)codeRedeemerController:(id)a0 didEndWithInfo:(id)a1;
- (void)codeRedeemerControllerDidCancel:(id)a0;
- (void)codeRedeemerControllerDidDisplayMessage:(id)a0;
- (id)initWithRedeemCategoryFullscreen:(long long)a0;
- (void)SUUIRedeemCameraView:(id)a0 textFieldDidRedeem:(id)a1;
- (void)SUUIRedeemCameraView:(id)a0 textFieldDidChange:(id)a1;
- (void)SUUIRedeemPreflightImagesDidLoad:(id)a0;
- (void)cancelRedeemerViewForSUUIRedeemCameraView:(id)a0;
- (void)presentFullScreenCameraViewForSUUIRedeemCameraView:(id)a0;
- (id)redeemerViewForSUUIRedeemCameraView:(id)a0;
- (void)showITunesPassLearnMoreForSUUIRedeemCameraView:(id)a0;
- (void)startRedeemerViewForSUUIRedeemCameraView:(id)a0;

@end
