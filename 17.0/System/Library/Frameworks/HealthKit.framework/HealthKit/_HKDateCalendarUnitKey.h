@class NSCalendar, NSDate;

@interface _HKDateCalendarUnitKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) unsigned long long calendarUnit;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDate:(id)a0 calendar:(id)a1 unit:(unsigned long long)a2;

@end
