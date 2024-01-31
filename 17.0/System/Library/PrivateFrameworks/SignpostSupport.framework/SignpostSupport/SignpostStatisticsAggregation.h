@class NSString, NSArray, NSDictionary;

@interface SignpostStatisticsAggregation : NSObject

@property (readonly) float timeBaseRatio;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *aggregatedSignpostObjects;
@property (readonly, nonatomic) NSString *aggregationIdentifier;
@property (readonly, nonatomic) NSDictionary *aggregationIdentifierToChildAggregationDict;
@property (readonly, nonatomic) unsigned char tier;
@property (readonly, nonatomic) NSString *tierString;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct { unsigned long long mct; double ns; double ms; double sec; } totalDuration;
@property (readonly, nonatomic) struct { unsigned long long mct; double ns; double ms; double sec; } averageDuration;
@property (readonly, nonatomic) struct { unsigned long long mct; double ns; double ms; double sec; } stddevDuration;

+ (id)statisticsAggregationForObjects:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)_calculateStats;
- (id)_dictRepresentation;
- (id)_initWithSignpostObjects:(id)a0 tier:(unsigned char)a1;
- (id)aggregationForTimeInterval:(id)a0 containedOnly:(BOOL)a1;
- (id)jsonDescription:(unsigned long long)a0;

@end
