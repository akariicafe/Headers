@class UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    long long _availability;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)_choices;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)_canChangeAvailability;

@end
