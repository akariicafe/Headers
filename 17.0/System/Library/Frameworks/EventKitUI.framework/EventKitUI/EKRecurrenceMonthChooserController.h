@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_monthsOfTheYearSet;
}

@property (retain, nonatomic) NSArray *monthsOfTheYear;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;

- (long long)frequency;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)tableViewCell;
- (id)cellLabels;
- (long long)gridViewType;
- (void)refreshCells;
- (void)selectCell:(id)a0 atIndex:(long long)a1;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
