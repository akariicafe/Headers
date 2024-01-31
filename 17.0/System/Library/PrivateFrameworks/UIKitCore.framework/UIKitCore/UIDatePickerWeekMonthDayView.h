@class UILabel, NSString;

@interface UIDatePickerWeekMonthDayView : UIView {
    struct { unsigned char weekdayLast : 1; } _datePickerWeekMonthDayViewFlags;
}

@property (readonly, nonatomic) UILabel *dateLabel;
@property (readonly, nonatomic) UILabel *weekdayLabel;
@property (copy, nonatomic) NSString *formattedDateString;
@property (nonatomic) double weekdayWidth;
@property (nonatomic) BOOL weekdayLast;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (void)layoutSubviews;

@end
