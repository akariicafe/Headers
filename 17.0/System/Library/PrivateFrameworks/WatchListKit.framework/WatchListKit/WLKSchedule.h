@class NSString, NSArray, NSDictionary, NSDate, NSMutableArray;

@interface WLKSchedule : NSObject {
    NSMutableArray *_mutableEvents;
    NSDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *events;

- (unsigned long long)hash;
- (void)prune;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)eventAfterDate:(id)a0;
- (BOOL)_isDate:(id)a0 containedByDate:(id)a1 andDate:(id)a2;
- (id)adjacentEventsForDate:(id)a0 fuzziness:(double)a1;
- (id)eventForDate:(id)a0;
- (id)eventForDate:(id)a0 fuzziness:(double)a1;

@end
