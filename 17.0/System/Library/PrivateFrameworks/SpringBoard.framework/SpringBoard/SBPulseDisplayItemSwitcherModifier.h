@class SBDisplayItem;

@interface SBPulseDisplayItemSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *displayItemToPulse;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)initWithDisplayItem:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTapAppLayoutHeaderEvent:(id)a0;

@end
