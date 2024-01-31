@class UIResponder;
@protocol UITextInput;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (weak) UIResponder<UITextInput> *textView;
@property (readonly, nonatomic) BOOL isLongPress;

- (BOOL)isWithinRecentTap;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)invalidate;
- (BOOL)_isGestureType:(long long)a0;
- (void)_startEnoughTimeElapsedTimer;
- (BOOL)shouldUseLegacyBehavior;
- (void).cxx_destruct;
- (BOOL)_allowsForShortDelay;
- (BOOL)isCloseToCaret;
- (BOOL)_tracksPointerTouch;

@end
