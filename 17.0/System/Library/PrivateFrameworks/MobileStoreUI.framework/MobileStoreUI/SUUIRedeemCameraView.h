@class SUUIRedeemITunesPassLockup, NSString, SUUIITunesPassConfiguration, UIImage, SUUIClientContext, SUUIRedeemCameraLandingView, UIView, UIButton, SUUIRedeemTextField;
@protocol SUUIRedeemCameraViewDelegate;

@interface SUUIRedeemCameraView : UIView <UITextFieldDelegate> {
    SUUIClientContext *_clientContext;
    SUUIRedeemTextField *_inputAccessoryTextField;
    SUUIRedeemITunesPassLockup *_iTunesPassLockup;
    SUUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SUUIRedeemTextField *_textField;
    BOOL _displayRedeem;
}

@property (weak, nonatomic) id<SUUIRedeemCameraViewDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SUUIITunesPassConfiguration *ITunesPassConfiguration;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardDidHide:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_hideKeyboard;
- (void)dealloc;
- (void)start;
- (void)showKeyboard;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)_resumeRedeemer;
- (void)_iTunesPassLearnMoreAction:(id)a0;
- (BOOL)_isShowingRedeemer;
- (void)_landingButtonAction:(id)a0;
- (id)_newTextFieldWithClientContext:(id)a0 placeholderColor:(id)a1;
- (void)_pauseRedeemer;
- (void)_showRedeemer:(BOOL)a0;
- (void)_tapGestureAction:(id)a0;
- (void)_termsButtonAction:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)textFieldTextDidChange:(id)a0;

@end
