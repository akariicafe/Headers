@class NSDate;

@interface EKUIResizingDateLabel : UILabel

@property (retain) NSDate *date;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)minDateLabelWidth;
- (id)stringForDateThatFits;

@end
