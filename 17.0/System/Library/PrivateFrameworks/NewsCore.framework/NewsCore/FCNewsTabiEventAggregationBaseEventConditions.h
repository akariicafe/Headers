@class NSDictionary;

@interface FCNewsTabiEventAggregationBaseEventConditions : NSObject

@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)noConditions;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)initWithProbability:(double)a0;

@end
