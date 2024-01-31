@class NSNumber;

@interface FedStatsDataEncoderDimensionalResult : NSObject

@property (copy) NSNumber *index;
@property (copy) NSNumber *dimensionality;

+ (id)resultWithIndex:(id)a0 dimensionality:(id)a1;

- (void).cxx_destruct;
- (id)initWithIndex:(id)a0 dimensionality:(id)a1;

@end
