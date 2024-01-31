@class UIResponder, UIWindowScene;

@interface UIInputResponderController : NSObject

@property (readonly, nonatomic) UIWindowScene *scene;
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL automaticAppearanceEnabled;
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates;

+ (long long)interfaceOrientation;
+ (void)setInterfaceOrientation:(long long)a0;
+ (void)performOnControllers:(id /* block */)a0;
+ (id)activeInputResponderController;

- (void)_endDisablingAnimations;
- (void)_beginDisablingAnimations;
- (void)addVisibilityObserver:(id)a0;
- (double)verticalOverlapForView:(id)a0 usingKeyboardInfo:(id)a1;
- (void)refreshWithLocalMinimumKeyboardHeight:(double)a0;
- (void).cxx_destruct;
- (void)removeVisibilityObserver:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrameInView:(id)a0;
- (id)_textInputSessionAnalytics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleInputViewFrameInView:(id)a0;
- (void)assertNo;

@end
