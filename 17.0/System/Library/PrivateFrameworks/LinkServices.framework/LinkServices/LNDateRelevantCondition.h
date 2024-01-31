@class NSDate;

@interface LNDateRelevantCondition : LNRelevantCondition

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;

@end
