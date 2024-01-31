@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent {
    _UIDatePickerCalendarMonth *_previousMonth;
    _UIDatePickerCalendarMonth *_nextMonth;
}

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *previousMonth;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *nextMonth;

+ (unsigned long long)representedCalendarUnits;

- (void).cxx_destruct;
- (id)_monthWithOffset:(long long)a0;
- (id)dayMatchingOrdinalDay:(id)a0;
- (id)dayWithDate:(id)a0 assignedMonth:(id)a1;

@end
