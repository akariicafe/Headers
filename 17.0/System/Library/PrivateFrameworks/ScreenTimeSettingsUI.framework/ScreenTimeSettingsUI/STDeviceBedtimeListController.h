@class NSArray, NSTimer, PSSpecifier, STDeviceBedtime, NSObject, STUIUser;
@protocol STRootViewModelCoordinator, STDeviceBedtimeListControllerDelegate;

@interface STDeviceBedtimeListController : PSListController <PSDateTimePickerCellDelegate>

@property (readonly) NSArray *orderedWeekdayIndexes;
@property (readonly) NSArray *orderedLocalizedWeekdayNames;
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *downTimeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *scheduledSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *scheduleSwitchGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *scheduleTypeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier;
@property (retain) PSSpecifier *everyDaySpecifier;
@property (retain) PSSpecifier *customizeDaysSpecifier;
@property (nonatomic) BOOL isEditingSimple;
@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimePickerSpecifier;
@property (retain) NSArray *weekdaySpecifiers;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeSpecifier;
@property (retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer;
@property (weak, nonatomic) id<STDeviceBedtimeListControllerDelegate> delegate;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (copy, nonatomic) STDeviceBedtime *bedtime;
@property (retain, nonatomic) STUIUser *affectedUser;
@property (nonatomic) BOOL canAskForMoreTime;

- (void)willResignActive;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (void)scheduleDowntimeRefreshIfNeeded;
- (id)_simpleEndTime:(id)a0;
- (id)askForMoreTime:(id)a0;
- (void)_actuallyToggleDowntimeEnabled;
- (id)_createDefaultCustomScheduleFromSimpleSchedule:(id)a0;
- (id)_customScheduleTime:(id)a0;
- (id)_deviceBedtimeSpecifierWithBedtime:(id)a0 downtimeGroupSpecifier:(id)a1;
- (void)_didEndEditingDailySchedule:(id)a0;
- (void)_didFinishEditingBedtime;
- (void)_renderDeviceBedtimeSpecifierWithBedtime:(id)a0;
- (void)_showCustomizeDailyScheduleListController:(id)a0;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0;
- (id)_simpleStartTime:(id)a0;
- (void)_toggleDowntimeEnabled;
- (id)atDowntimeFooterText;
- (id)deviceBedtimeEnabled:(id)a0;
- (void)scheduleDowntimeRefreshAndReloadSpecifiers;
- (void)setAskForMoreTime:(id)a0 specifier:(id)a1;
- (void)setDeviceBedtimeEnabled:(id)a0 specifier:(id)a1;
- (id)timeFooterText;

@end
