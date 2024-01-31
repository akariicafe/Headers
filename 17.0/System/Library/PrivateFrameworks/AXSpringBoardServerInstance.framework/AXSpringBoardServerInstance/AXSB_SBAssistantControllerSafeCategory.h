@interface AXSB_SBAssistantControllerSafeCategory : __AXSB_SBAssistantControllerSafeCategory_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_dismissAssistantViewIfNecessaryWithAnimation:(long long)a0 factory:(id)a1 dismissalOptions:(id)a2 windowScene:(id)a3 completion:(id /* block */)a4;
- (void)_axDismissSiriForAssistiveTouch;
- (void)_axCancelDismissSiriForAssistiveTouch;
- (void)_axScheduleDismissSiriForAssistiveTouch;
- (void)_axSetSiriDismissalIsForAssistiveTouch:(BOOL)a0;
- (void)_axSetSiriDismissalOptions:(id)a0;
- (BOOL)_axSiriDismissalIsForAssistiveTouch;
- (id)_axSiriDismissalOptions;

@end
