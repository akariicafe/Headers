@class UIColor;

@interface SPUIHeaderBlurView : UIVisualEffectView

@property (retain) UIColor *baseTintColor;
@property (nonatomic) BOOL keyboardIsUp;
@property (nonatomic) BOOL useInPlaceFilteredBlur;

- (id)init;
- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow;
- (void)updateEffect;
- (void)keyboardWillHide;

@end
