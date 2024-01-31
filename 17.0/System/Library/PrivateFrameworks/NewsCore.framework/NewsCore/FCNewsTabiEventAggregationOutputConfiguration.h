@class NSArray, NSDictionary;

@interface FCNewsTabiEventAggregationOutputConfiguration : NSObject

@property (retain, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputNames:(id)a0;

@end
