@class NSString, NSArray, SAUIPreferredLayoutModeAssertion, NSPointerArray;
@protocol SAUILayoutModePreferring, SAUILayoutSpecifying, SAUILayoutHosting;

@interface SAUILayoutSpecifyingOverrider : NSObject <SAUILayoutSpecifyingOverridingParticipant, SAUILayoutSpecifyingOverriding> {
    NSPointerArray *_orderedBehaviorOverridingParticipants;
}

@property (readonly, nonatomic) long long behaviorOverridingRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<SAUILayoutSpecifying> layoutSpecifyingOverridingTarget;
@property (readonly, weak, nonatomic) id behaviorOverridingTarget;
@property (readonly, nonatomic) id<SAUILayoutModePreferring> layoutModePreference;
@property (readonly, nonatomic) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (readonly, copy, nonatomic) NSArray *preferredLayoutModeAssertions;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;

- (void)setLayoutMode:(long long)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)addBehaviorOverridingParticipant:(id)a0;
- (id)behaviorOverridingParticipantSubordinateToParticipant:(id)a0;
- (BOOL)isInteractiveDismissalEnabledForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (BOOL)isMinimalPresentationPossibleForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1 forTargetWithOverrider:(id)a2 isDefaultValue:(BOOL *)a3;
- (BOOL)isRequestingMenuPresentationForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0 forTargetWithOverrider:(id)a1;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)a0;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)a0 forTargetWithOverrider:(id)a1;
- (long long)layoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (id)layoutModePreferenceForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (id)layoutSpecifyingOverridingParticipantSubordinateToParticipant:(id)a0 thatRespondsToSelector:(SEL)a1;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 forTargetWithOverrider:(id)a3 isDefaultValue:(BOOL *)a4;
- (id)preferredLayoutModeAssertionForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (long long)preferredLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1 forTargetWithOverrider:(id)a2;
- (void)setPreferredLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setPreferredLayoutMode:(long long)a0 reason:(long long)a1 forTargetWithOverrider:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2 forTargetWithOverrider:(id)a3 isDefaultValue:(BOOL *)a4;
- (id)_behaviorOverridingParticipantSubordinate:(BOOL)a0 toParticipant:(id)a1 passingTest:(id /* block */)a2;
- (id)_firstParticipantThatRespondsToSelector:(SEL)a0;
- (id)behaviorOverridingParticipantSuperiorToParticipant:(id)a0;
- (id)layoutSpecifyingOverridingParticipantSuperiorToParticipant:(id)a0 thatRespondsToSelector:(SEL)a1;
- (void)removeBehaviorOverridingParticipant:(id)a0;
- (void)removeBehaviorOverridingParticipantWithRole:(long long)a0;

@end
