@class _UICalendarDataModel, UIDatePicker;
@protocol _UICalendarMonthYearSelectorDelegate;

@interface _UICalendarMonthYearSelector : UIView {
    UIDatePicker *_datePicker;
}

@property (weak, nonatomic) id<_UICalendarMonthYearSelectorDelegate> delegate;
@property (retain, nonatomic) _UICalendarDataModel *dataModel;

- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDataModel:(id)a0;
- (void)_didSelectDate:(id)a0;
- (void)didUpdateLocale;
- (void)_setupViewHierarchy;
- (void)didUpdateCalendar;
- (void)didUpdateTimeZone;
- (void)didUpdateVisibleMonth;
- (void)setSelectedMonth:(id)a0;
- (void)setSelectedMonth:(id)a0 animated:(BOOL)a1;

@end
