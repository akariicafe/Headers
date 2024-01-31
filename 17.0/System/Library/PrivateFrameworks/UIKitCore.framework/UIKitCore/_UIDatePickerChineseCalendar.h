@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar

@property (retain, nonatomic) NSCalendar *realCalendar;

+ (id)cyclicalFromRelated:(id)a0;
+ (id)relatedFromCyclical:(id)a0;

- (id)initWithCalendar:(id)a0;
- (void)setTimeZone:(id)a0;
- (id)calendarIdentifier;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateFromComponents:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;

@end
