@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar

+ (id)calendar;
+ (void)initialize;
+ (void)update;
+ (BOOL)closestWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 afterDate:(id)a2;
+ (BOOL)dateIntervalIntersectsWeekend:(id)a0;
+ (BOOL)isWeekendDate:(id)a0;
+ (BOOL)nextWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
+ (BOOL)rangeOfWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 containingDate:(id)a2;

@end
