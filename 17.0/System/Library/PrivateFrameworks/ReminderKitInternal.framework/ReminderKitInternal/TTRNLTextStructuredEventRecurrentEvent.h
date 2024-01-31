@class NSDictionary, NSDateComponents, NSDate;

@interface TTRNLTextStructuredEventRecurrentEvent : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isAllDay;
@property (copy, nonatomic) NSDictionary *frequency;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *endDateComponents;
@property (copy, nonatomic) NSDateComponents *frequencyComponents;
@property (readonly, nonatomic) long long hourFrequency;
@property (readonly, nonatomic) long long dayFrequency;
@property (readonly, nonatomic) long long monthFrequency;
@property (readonly, nonatomic) long long weekOfMonthFrequency;
@property (readonly, nonatomic) long long weekDay;
@property (readonly, nonatomic) long long weekdayOrdinal;
@property (readonly, nonatomic) long long weekdayStart;
@property (readonly, nonatomic) long long weekdayEnd;
@property (readonly, nonatomic) long long weekOfYear;
@property (readonly, nonatomic) long long yearFrequency;

- (id)description;
- (void).cxx_destruct;
- (long long)frequencyForKey:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 startDate:(id)a1 endDate:(id)a2 isAllDay:(BOOL)a3 frequency:(id)a4;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 startDate:(id)a1 endDate:(id)a2 isAllDay:(BOOL)a3 startComponents:(id)a4 endComponents:(id)a5 frequencyComponents:(id)a6;

@end
