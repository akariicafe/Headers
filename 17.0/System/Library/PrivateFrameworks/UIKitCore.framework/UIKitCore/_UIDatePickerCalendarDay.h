@class _UIDatePickerCalendarMonth;

@interface _UIDatePickerCalendarDay : _UIDatePickerCalendarDateComponent

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *month;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *assignedMonth;
@property (readonly, nonatomic) BOOL isToday;

+ (unsigned long long)representedCalendarUnits;

- (unsigned long long)hash;
- (id)initWithDate:(id)a0 calendar:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithAssignedMonth:(id)a0;
- (id)initWithDate:(id)a0 calendar:(id)a1 month:(id)a2 assignedMonth:(id)a3;

@end
