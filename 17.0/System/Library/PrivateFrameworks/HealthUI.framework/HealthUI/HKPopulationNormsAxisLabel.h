@class NSNumber, NSString;

@interface HKPopulationNormsAxisLabel : NSObject

@property (copy, nonatomic) NSNumber *rangeStart;
@property (readonly, copy, nonatomic) NSNumber *rangeEnd;
@property (readonly, nonatomic) NSString *separatorString;

- (id)stringRepresentation;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithRangeStart:(id)a0 end:(id)a1;

@end
