@class NSNumber, SignpostAggregationGroup, NSString;

@interface SignpostAggregationGroupDuration : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *minDurationNs;
@property (retain, nonatomic) NSNumber *maxDurationNs;
@property (weak, nonatomic) SignpostAggregationGroup *parentGroup;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) unsigned long long totalDurationNs;
@property (readonly, nonatomic) double totalDurationMs;
@property (readonly, nonatomic) double totalDurationSeconds;
@property (readonly, nonatomic) unsigned long long averageDurationNs;
@property (readonly, nonatomic) double averageDurationMs;
@property (readonly, nonatomic) double averageDurationSeconds;
@property (readonly, nonatomic) NSNumber *minDurationMs;
@property (readonly, nonatomic) NSNumber *minDurationSeconds;
@property (readonly, nonatomic) NSNumber *maxDurationMs;
@property (readonly, nonatomic) NSNumber *maxDurationSeconds;

+ (id)_sumOfDuration1:(id)a0 duration2:(id)a1 errorOut:(id *)a2;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_addDuration:(id)a0;
- (void)_addToPayloadDictionary:(id)a0;
- (id)_coreAnalyticsFieldName;
- (id)_initWithMetadataSegment:(id)a0 errorOut:(id *)a1;
- (id)_initWithType:(id)a0 groupName:(id)a1 durationNs:(unsigned long long)a2 telemetryEnabled:(BOOL)a3;

@end
