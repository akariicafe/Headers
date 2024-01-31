@class SBDisplayItem, NSArray, NSDictionary, SBAppLayout, NSMutableArray;

@interface SBContinuousExposeAppToAppModifier : SBTransitionSwitcherModifier {
    NSArray *_displayItemsChangingSize;
    NSMutableArray *_pendingDisplayItemSceneUpdates;
    SBDisplayItem *_fromTopMostDisplayItem;
    SBDisplayItem *_toTopMostDisplayItem;
}

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) long long fromInterfaceOrientation;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;
@property (readonly, nonatomic) long long toInterfaceOrientation;
@property (readonly, copy, nonatomic) NSDictionary *fromDisplayItemLayoutAttributesMap;
@property (readonly, copy, nonatomic) NSDictionary *toDisplayItemLayoutAttributesMap;
@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition;
@property (nonatomic, getter=isCommandTabTransition) BOOL commandTabTransition;
@property (nonatomic, getter=isLaunchingFromDockTransition) BOOL launchingFromDockTransition;
@property (nonatomic, getter=isMorphFromInAppViewTransition) BOOL morphFromInAppViewTransition;
@property (nonatomic, getter=isLaunchingFromSpotlightTransition) BOOL launchingFromSpotlightTransition;
@property (nonatomic) BOOL isTopAffordanceMenuTransition;

- (BOOL)asyncRenderingDisabled;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)_topMostDisplayItemInDisplayItemLayoutAttributesMap:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 fromInterfaceOrientation:(long long)a2 toAppLayout:(id)a3 toInterfaceOrientation:(long long)a4 fromDisplayItemLayoutAttributesMap:(id)a5 toDisplayItemLayoutAttributesMap:(id)a6;

@end
