@protocol AFUITouchInputViewDelegate;

@interface AFUITouchInputView : UIView

@property (weak, nonatomic) id<AFUITouchInputViewDelegate> delegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
