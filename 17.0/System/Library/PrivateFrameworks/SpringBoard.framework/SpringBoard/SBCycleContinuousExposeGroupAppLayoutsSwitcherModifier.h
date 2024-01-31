@class SBAppLayout;

@interface SBCycleContinuousExposeGroupAppLayoutsSwitcherModifier : SBSwitcherModifier {
    BOOL _isDelayingCompletionForHover;
    unsigned long long _initialGenerationCount;
    SBAppLayout *_appLayoutToOrderFront;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) SBAppLayout *behindAppLayout;
@property (readonly, nonatomic) unsigned long long generationCount;

- (id)visibleAppLayouts;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)_completeIfNeededIgnoringHover:(BOOL)a0;
- (id)_completeIfNeeded;
- (id)_timeoutReason;
- (id)handleHighlightEvent:(id)a0;
- (id)initWithAppLayout:(id)a0 behindAppLayout:(id)a1 generationCount:(unsigned long long)a2;

@end
