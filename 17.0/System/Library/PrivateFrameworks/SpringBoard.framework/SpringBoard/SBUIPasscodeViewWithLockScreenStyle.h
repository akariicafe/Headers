@class SBUIBackgroundView, UIView;
@protocol SBUIPasscodeLockView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView {
    SBUIBackgroundView *_backgroundView;
}

@property (readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView;

- (void)setBlurEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 includeBlur:(BOOL)a1 passcodeViewGenerator:(id /* block */)a2;

@end
