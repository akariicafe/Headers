@class UIStackView, HUTimerCancelButtonView, NSString, HUTimerCountdownView, UILayoutGuide, MTTimer, UILabel, COTimerManager;

@interface HUTimerTableViewCell : UITableViewCell <HUTimerCancelDelegate, HUTimerCountdownDelegate>

@property (retain, nonatomic) MTTimer *timer;
@property (retain, nonatomic) COTimerManager *timerManager;
@property (retain, nonatomic) UILabel *timerNameLabel;
@property (retain, nonatomic) UILabel *timerTimeLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILayoutGuide *buttonGuide;
@property (retain, nonatomic) HUTimerCountdownView *timerCountdownView;
@property (retain, nonatomic) HUTimerCancelButtonView *cancelButtonView;
@property (nonatomic) double previousRemainingTime;
@property (retain, nonatomic) NSString *roomName;

+ (id)_stringForDuration:(double)a0;

- (void)cancelTimer;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_createConstraints;
- (void)_createSubviews;
- (void)updateTimerInfo;
- (id)_alarmBackgroundColor;
- (id)initWithMobileTimerObject:(id)a0 manager:(id)a1 roomName:(id)a2;
- (id)initWithTimer:(id)a0 manager:(id)a1;
- (void)toggleTimer;

@end
