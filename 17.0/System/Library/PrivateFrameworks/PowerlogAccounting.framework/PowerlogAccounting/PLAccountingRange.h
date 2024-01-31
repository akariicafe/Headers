@class NSDate;

@interface PLAccountingRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double length;

+ (id)rangeWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)emptyRange;

- (BOOL)overlaps:(id)a0;
- (id)intersect:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 withEndDate:(id)a1;

@end
