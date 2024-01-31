@class NSString;
@protocol _CDUserContext;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate>

@property (readonly, nonatomic) BOOL showingPicker;
@property (nonatomic) unsigned long long timeOfDayInterval;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dismissKeyboard;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)titleForIndexPath:(id)a0;
- (void)dayOfWeekPickerCell:(id)a0 didChangeSelectedRecurrences:(id)a1;
- (id)infoForSection:(long long)a0;
- (id)allDaysOfWeek;
- (id)calendarFooterText;
- (id)currentDayOfMonth;
- (id)currentSunriseTime;
- (id)currentSunsetTime;
- (id)customSections;
- (id)dateComponentsFromTriggerDays;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)a0;
- (id)subtitleForIndexPath:(id)a0;
- (id)tableViewCellClasses;
- (void)timeOffsetPickerViewController:(id)a0 didSelectOffset:(unsigned long long)a1;
- (void)timeOffsetPickerViewControllerDidCancel:(id)a0;
- (void)timePickerUpdated:(id)a0;
- (void)updateCalendarDayIfNeeded;
- (void)updateCalendarFooterText;
- (void)updateTriggerCalendarDayFromDate:(id)a0;
- (void)updateTriggerTimeFromDate:(id)a0;

@end
