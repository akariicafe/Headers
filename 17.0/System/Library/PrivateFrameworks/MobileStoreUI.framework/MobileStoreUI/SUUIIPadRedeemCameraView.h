@class UIButton, NSString, SUUIRedeemTextField, UIImage, SUUIRedeemCameraLandingView, UIView, UIScrollView;
@protocol SUUIRedeemCameraViewDelegate;

@interface SUUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {
    SUUIRedeemTextField *_inputAccessoryTextField;
    SUUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SUUIRedeemTextField *_textField;
}

@property (weak, nonatomic) id<SUUIRedeemCameraViewDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_hideKeyboard;
- (void)dealloc;
- (void)start;
- (void)showKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)keyboardDidChange:(id)a0;
- (double)_adjustVerticalSpacingForHeight:(double)a0;
- (void)_landingButtonAction:(id)a0;
- (id)_newTextFieldWithClientContext:(id)a0 placeholderColor:(id)a1;
- (void)_termsButtonAction:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)textFieldTextDidChange:(id)a0;

@end
