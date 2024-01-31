@class NSArray, NSMutableArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {
    NSMutableArray *_selectedRows;
}

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSArray *daysOfTheWeek;

- (long long)frequency;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (int)_dayMask;
- (void)_setCell:(id)a0 selected:(BOOL)a1;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)rowTapped:(long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
