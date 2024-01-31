@protocol SBPowerDownViewDelegate;

@interface SBPowerDownView : SBUIPowerDownView

@property (weak, nonatomic) id<SBPowerDownViewDelegate> powerDownDelegate;

- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_didTapFindMy;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)a0;

@end
