@class NSString, NSMutableArray, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol UIScenePresenter;

@interface SBMedusaHostedKeyboardWindow : SBWindow <BSInvalidatable> {
    id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}

@property (retain, nonatomic) NSMutableArray *windowLevelAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autorotates;
+ (BOOL)_isSecure;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)removeWindowLevelAssertion:(id)a0;
- (void)addWindowLevelAssertion:(id)a0;
- (void)invalidate;
- (id)newWindowLevelAssertionWithPriority:(unsigned long long)a0 windowLevel:(double)a1;
- (void)medusaHostedKeyboardWindowWillShow:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setHidden:(BOOL)a0;
- (id)initWithWindowScene:(id)a0 keyboardScene:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_updateWindowLevel;
- (BOOL)_shouldControlAutorotation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)succinctDescription;
- (BOOL)isActive;
- (void)medusaHostedKeyboardWindowWillHide:(id)a0;

@end
