@class NSDateFormatter, PSSpecifier, NSTimer, CBClient;

@interface DBSColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {
    NSDateFormatter *_timeFormatter;
    BOOL _temperatureSliderWasTracking;
    NSTimer *_blueLightReductionLabelRefreshTimer;
    BOOL _showColorTemperature;
    BOOL _showingScheduleRange;
}

@property (retain, nonatomic) CBClient *_brightnessClient;
@property (retain, nonatomic) PSSpecifier *_scheduleRangeSpecifier;
@property (retain, nonatomic) PSSpecifier *_scheduleSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *_manualSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *_temperatureSlider;

- (void)dealloc;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)fromDetailForCell:(id)a0;
- (id)toDetailForCell:(id)a0;
- (void)colorTemperatureSliderDidChange;
- (void)_printBlueLightStatus:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (id)blueLightReductionFooter;
- (id)getBlueLightReductionEnabled:(id)a0;
- (id)getBlueLightReductionScheduleEnabled:(id)a0;
- (void)handleBlueLightStatusChanged:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (id)localizedTimeForTime:(struct { int x0; int x1; })a0;
- (void)setBlueLightReductionEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setBlueLightReductionSchedule:(id)a0 forSpecifier:(id)a1;
- (void)setTemperatureStrength:(id)a0 specifier:(id)a1;
- (void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)showScheduleRange:(BOOL)a0 animated:(BOOL)a1;
- (id)temperatureStrength:(id)a0;

@end
