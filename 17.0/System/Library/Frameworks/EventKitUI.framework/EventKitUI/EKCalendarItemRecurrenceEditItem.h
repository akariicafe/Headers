@class NSString, UITableViewCell, EKDateTimeCell, NSDate, EKUITableViewCell, UIDatePicker;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKDateTimeCellDelegate> {
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    UITableViewCell *_customCell;
    EKDateTimeCell *_endDateCell;
    EKUITableViewCell *_endDatePickerCell;
    UIDatePicker *_endDatePicker;
    BOOL _showingDatePicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_neverLocalizedString;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)recurrenceDate;
- (id)init;
- (void)dealloc;
- (unsigned long long)numberOfSubitems;
- (void)_contentSizeCategoryChanged:(id)a0;
- (void).cxx_destruct;
- (void)refreshFromCalendarItemAndStore;
- (id)repeatPopupMenu;
- (unsigned long long)subitemAtIndex:(unsigned long long)a0;
- (void)_datePickerChanged:(id)a0;
- (id)_newDatePicker;
- (void)_updateMinRecurrenceEndDate;
- (BOOL)_validateRecurrenceType:(id)a0;
- (id)bestInitialEndDate;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (void)dateTimeCell:(id)a0 dateChanged:(id)a1;
- (void)dateTimeCellBeganEditing:(id)a0;
- (void)dateTimeCellDateTapped:(id)a0;
- (void)dateTimeCellEndedEditing:(id)a0;
- (void)dateTimeCellTimeTapped:(id)a0;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)endRepeatPopupMenu;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (unsigned long long)indexForSubitem:(unsigned long long)a0;
- (id)minRecurrenceEndDate;
- (void)presentCustomRecurrenceVC;
- (id)recurrenceRuleFromRepeatType:(long long)a0;
- (id)recurrenceTimeZone;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)saveNewRepeatEndDate:(id)a0;
- (id)stringForDate:(id)a0;

@end
