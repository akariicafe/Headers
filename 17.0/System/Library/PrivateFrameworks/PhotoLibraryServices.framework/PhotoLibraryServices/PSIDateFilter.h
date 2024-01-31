@class PSIDate, NSString;

@interface PSIDateFilter : NSObject <NSCopying>

@property (readonly) PSIDate *singleDate;
@property (readonly) PSIDate *startDate;
@property (readonly) PSIDate *endDate;
@property (copy, nonatomic) NSString *displayString;
@property (readonly) long long int64RepresentationMask;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEndDateComponents:(id)a0;
- (id)initWithSingleDate:(id)a0;
- (id)initWithSingleDateComponents:(id)a0;
- (id)initWithStartDateComponents:(id)a0;

@end
