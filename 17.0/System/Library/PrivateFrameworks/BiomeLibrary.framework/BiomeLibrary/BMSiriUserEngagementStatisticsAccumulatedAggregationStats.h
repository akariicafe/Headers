@class NSArray, NSString;

@interface BMSiriUserEngagementStatisticsAccumulatedAggregationStats : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double aggregationStartTimestamp;
@property (nonatomic) BOOL hasAggregationStartTimestamp;
@property (readonly, nonatomic) int numberOfDaysAggregation;
@property (nonatomic) BOOL hasNumberOfDaysAggregation;
@property (readonly, nonatomic) NSArray *aggregationStats;
@property (readonly, nonatomic) NSString *cohortType;
@property (readonly, nonatomic) double intendedRequestRatio;
@property (nonatomic) BOOL hasIntendedRequestRatio;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_aggregationStatsJSONArray;
- (id)initWithAggregationStartTimestamp:(id)a0 numberOfDaysAggregation:(id)a1 aggregationStats:(id)a2 cohortType:(id)a3 intendedRequestRatio:(id)a4;

@end
