@class _UIEventDeferringManager, NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

@interface _UIEventDeferringBehavior_Default : NSObject <_UIEventDeferringBehaviorInternal> {
    struct { unsigned char systemShellManagesKeyboardFocus : 1; } _behaviorFlags;
}

@property (weak, nonatomic) id<_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate;
@property (nonatomic) BOOL systemShellManagesKeyboardFocus;
@property (readonly, weak, nonatomic) _UIEventDeferringManager *eventDeferringManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)wantsLocalCompatibilityRules;
- (id)succinctDescriptionBuilder;
- (BOOL)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (BOOL)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
- (BOOL)wantsSystemKeyCommandOverlayRules;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)shouldSuppressRemoteRuleForOwningElement:(id)a0 inEnvironment:(id)a1;
- (BOOL)shouldAllowFallbackWindowForEnvironment:(id)a0;
- (BOOL)wantsLocalIdealRules;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
- (id)initWithEventDeferringManager:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (long long)compareRemoteRuleOwningElement:(id)a0 toElement:(id)a1 inEnvironment:(id)a2;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (BOOL)eligibleForLocalCompatibilityRuleRemoval;

@end
