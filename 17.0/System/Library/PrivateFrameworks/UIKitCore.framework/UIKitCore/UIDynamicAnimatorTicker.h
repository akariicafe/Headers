@class UIDynamicAnimator;

@interface UIDynamicAnimatorTicker : NSObject

@property (weak) UIDynamicAnimator *animator;

- (void)_displayLinkTick:(id)a0;
- (void).cxx_destruct;
- (void)_uiUpdateSequenceTick:(double)a0;

@end
