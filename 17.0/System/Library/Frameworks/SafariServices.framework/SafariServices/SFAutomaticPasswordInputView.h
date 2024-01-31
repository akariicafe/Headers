@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewSizing, SFAutomaticPasswordInputViewDelegate;

@interface SFAutomaticPasswordInputView : UIInputView {
    SFAutomaticPasswordExplanationView *_explanationView;
}

@property (readonly, nonatomic) long long keyboardType;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewDelegate> delegate;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewSizing> inputViewSizing;
@property (nonatomic) BOOL shouldAllowSelfSizing;

- (void)setKeyboardAppearance:(long long)a0;
- (long long)keyboardAppearance;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)allowsSelfSizing;
- (void)_useStrongPasswordButtonAction:(id)a0;
- (id)initWithInputViewStyle:(long long)a0 keyboardType:(long long)a1;

@end
