@class MTUITimerCountdownView, UIButton, UIView;
@protocol HUTimerCountdownDelegate;

@interface HUTimerCountdownView : UIView

@property (nonatomic) unsigned long long state;
@property (nonatomic) double remainingTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) UIView *circleBackgroundView;
@property (retain, nonatomic) MTUITimerCountdownView *countdownView;
@property (retain, nonatomic) id<HUTimerCountdownDelegate> delegate;
@property (retain, nonatomic) UIButton *pauseResumeButton;
@property (nonatomic) unsigned long long currentState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)toggle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithRemainingTime:(double)a0 state:(unsigned long long)a1 duration:(double)a2 delegate:(id)a3;
- (void)updateToNewState:(unsigned long long)a0;
- (void)updateToNewTime:(double)a0;

@end
