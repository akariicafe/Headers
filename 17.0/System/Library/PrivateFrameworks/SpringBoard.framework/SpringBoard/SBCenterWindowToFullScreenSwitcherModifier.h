@class SBDisplayItem, SBAppLayout;

@interface SBCenterWindowToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fullScreenAppLayoutWithCenterRemoved;
    SBDisplayItem *_movingCenterItem;
}

- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fullScreenWithCenterAppLayout:(id)a1;

@end
