@class EKRecurrenceOrdinalChooserController, UITableViewCell, EKRecurrenceMonthDayChooserController;
@protocol EKRecurrenceChooserControllerDelegate;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {
    EKRecurrenceMonthDayChooserController *_monthDayChooser;
    EKRecurrenceOrdinalChooserController *_ordinalChooser;
    id<EKRecurrenceChooserControllerDelegate> _delegate;
    long long _selectedRow;
    UITableViewCell *_onEachCell;
    UITableViewCell *_onTheCell;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

- (long long)frequency;
- (long long)numberOfRows;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (void)setDelegate:(id)a0;
- (id)_currentChooser;
- (void)_selectRow:(long long)a0;
- (id)cellForRow:(long long)a0;
- (BOOL)drawBackgroundForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)rowTapped:(long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
