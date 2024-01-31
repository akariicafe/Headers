@class NSDate, NSString, NSArray, FUScrollWheel, NSMutableArray, NSDateFormatter, UILabel, UIColor;
@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate> {
    unsigned long long _monthOffset;
    unsigned long long _dayOffset;
    long long _yearOrder;
    long long _monthOrder;
    long long _dayOrder;
    unsigned long long _numRowsMonth;
    unsigned long long _numRowsDate;
    unsigned long long _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    BOOL _firstResponderShouldChange;
    BOOL _displayEra;
    UIColor *_tintColor;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _initialWheelType;
}

@property (retain, nonatomic) FUScrollWheel *monthWheel;
@property (retain, nonatomic) FUScrollWheel *dayWheel;
@property (retain, nonatomic) FUScrollWheel *yearWheel;
@property (weak, nonatomic) id<FUDatePickerDelegate> delegate;
@property (copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDate:(id)a0 animated:(BOOL)a1;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)a0;
- (void)_updateDayRangeReloadingWheel:(BOOL)a0;
- (void)_updateSpinnersAnimated:(BOOL)a0;
- (id)_wheelOfType:(long long)a0;
- (id)dateWheel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tintColor:(id)a1 initialWheelType:(long long)a2 shouldEnableCrown:(BOOL)a3 minimumDate:(id)a4 maximumDate:(id)a5;
- (unsigned long long)numberOfRowsInScrollWheel:(id)a0;
- (void)scrollWheel:(id)a0 didChangeCurrentIndexTo:(unsigned long long)a1;
- (id)scrollWheel:(id)a0 titleForItemAtIndex:(unsigned long long)a1;
- (BOOL)scrollWheelShouldBecomeFirstResponder:(id)a0;
- (void)tappedScrollWheel:(id)a0;

@end
