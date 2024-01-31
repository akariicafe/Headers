@class NSString, NSArray;

@interface SBContinuousExposeIdentifierSlideModifier : SBSwitcherModifier {
    BOOL _isWaitingToPrepareLayout;
    BOOL _isWaitingToBeginAnimation;
    NSString *_uniqueAnimationIdentifier;
}

@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier;
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInSwitcher;
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInStrip;
@property (readonly, nonatomic) unsigned long long direction;

- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)a0;
- (void).cxx_destruct;
- (id)_beginAnimation;
- (id)handleTimerEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void)_performBlockWithIdentifiersInSwitcher:(id)a0 identifiersInStrip:(id)a1 block:(id /* block */)a2;
- (id)_waitingToAnimateReason;
- (id)_waitingToPrepareLayoutReason;
- (id)initWithContinuousExposeIdentifier:(id)a0 previousContinuousExposeIdentifiersInSwitcher:(id)a1 previousContinuousExposeIdentifiersInStrip:(id)a2 direction:(unsigned long long)a3;

@end
