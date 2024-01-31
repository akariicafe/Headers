@class UIKeyboardSceneDelegate, UIInputViewAnimationStyle;

@interface _UIInputViewAnimationAssertion : NSObject

@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) UIKeyboardSceneDelegate *sceneDelegate;
@property (retain, nonatomic) UIInputViewAnimationStyle *style;
@property (readonly, nonatomic) int direction;

+ (id)_assertionWithDirection:(int)a0 animated:(BOOL)a1 sceneDelegate:(id)a2;

- (void)invalidate;
- (void).cxx_destruct;

@end
