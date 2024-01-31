@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject

@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;

- (id)chunked:(long long)a0 calendar:(id)a1;
- (BOOL)containsDateComponents:(id)a0 inCalendar:(id)a1;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
