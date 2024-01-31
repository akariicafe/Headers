@class UIColor, UIFont, SUUIClientContext, _SUUICounterTimeFieldView, NSDate;

@interface SUUICounterTimeView : UIView {
    SUUIClientContext *_clientContext;
    _SUUICounterTimeFieldView *_daysFieldView;
    _SUUICounterTimeFieldView *_hoursFieldView;
    long long _lastTimeValue;
    _SUUICounterTimeFieldView *_minutesFieldView;
    _SUUICounterTimeFieldView *_secondsFieldView;
}

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) unsigned long long visibleFields;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadTimeValue;
- (id)_allFieldViews;
- (double)_fieldSpacingForFieldCount:(long long)a0 fieldWidth:(double)a1 totalWidth:(double)a2;
- (void)_setValuesUsingTimestamp:(long long)a0;
- (id)_visibleFieldViews;
- (id)initWithClientContext:(id)a0;

@end
