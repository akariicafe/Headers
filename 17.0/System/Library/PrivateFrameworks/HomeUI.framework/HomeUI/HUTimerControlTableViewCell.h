@class UIStackView, NSString, UIColor, HUTimerControlCountdownView, UILayoutGuide, UIVisualEffectView, UILabel, HUTimerControlCancelButtonView;
@protocol HUTimerControlCountdownDelegate;

@interface HUTimerControlTableViewCell : UITableViewCell <HUTimerControlCountdownDelegate, HUTimerControlCancelDelegate>

@property (weak, nonatomic) id<HUTimerControlCountdownDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double remainingTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *timerTitle;
@property (retain, nonatomic) UILabel *timerNameLabel;
@property (retain, nonatomic) UILabel *timerTimeLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILayoutGuide *buttonGuide;
@property (retain, nonatomic) HUTimerControlCountdownView *timerCountdownView;
@property (retain, nonatomic) HUTimerControlCancelButtonView *cancelButtonView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) double previousRemainingTime;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) UIColor *overrideBackgroundColor;

+ (id)_stringForDuration:(double)a0;

- (void)cancelTimer;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_createConstraints;
- (void)_createSubviews;
- (id)_alarmBackgroundColor;
- (id)initWithRemainingTime:(double)a0 state:(unsigned long long)a1 duration:(double)a2 timerTitle:(id)a3;
- (void)toggleTimer;
- (void)updateTimerInfo:(double)a0 state:(unsigned long long)a1;

@end
