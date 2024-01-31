@class SignpostAggregation, NSString, NSMutableDictionary, NSDictionary;

@interface SignpostAggregationAccumulatorEntry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationCreationErrorCounts;
@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationAdditionErrorCounts;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *aggregationDescription;
@property (readonly, nonatomic) NSString *aggregationSignature;
@property (readonly, nonatomic) BOOL includeRawIntervals;
@property (readonly, nonatomic) NSDictionary *aggregationCreationErrorCounts;
@property (readonly, nonatomic) NSDictionary *aggregationAdditionErrorCounts;
@property (readonly, nonatomic) SignpostAggregation *accumulatedAggregation;

+ (void)_bumpErrorCount:(id)a0 countDict:(id)a1;

- (void).cxx_destruct;
- (void)_handleInterval:(id)a0;
- (id)_initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 aggregationDescription:(id)a3 includeRawIntervals:(BOOL)a4;

@end
