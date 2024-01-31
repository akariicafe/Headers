@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (double)height;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRecurrenceString:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (id)_myTableView;
- (id)_recurrenceLabel;

@end
