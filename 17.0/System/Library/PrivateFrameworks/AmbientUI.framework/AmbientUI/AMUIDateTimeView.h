@class UIColor, UIFont, NSDate, UILabel, NSLayoutConstraint;

@interface AMUIDateTimeView : UIView {
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    NSLayoutConstraint *_timeLabelYOffsetConstraint;
}

@property (copy, nonatomic) UIFont *timeFont;
@property (copy, nonatomic) UIFont *dateFont;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) UIColor *textColor;

+ (id)defaultTimeFont;
+ (id)defaultDateFont;

- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
