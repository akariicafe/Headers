@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView {
    BFFPasscodeInputView *_passcodeInputView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentKeyboardFrame;
@property (weak, nonatomic) UIViewController *passcodeViewController;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardWillShow:(id)a0;
- (BOOL)alwaysBounceVertical;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)passcodeInputView;
- (void)animateTransitionToPasscodeInput:(id)a0 animation:(unsigned long long)a1;
- (void)transitionToPasscodeInput:(id)a0 delegate:(id)a1;

@end
