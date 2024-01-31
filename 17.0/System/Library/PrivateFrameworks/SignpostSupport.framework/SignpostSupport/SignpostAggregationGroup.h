@class NSDictionary, SignpostAggregation, NSString;

@interface SignpostAggregationGroup : NSObject <NSCopying>

@property (weak, nonatomic) SignpostAggregation *parentAggregation;
@property (retain, nonatomic) NSDictionary *durationTypeToDurationDict;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSString *countUnit;
@property (readonly, nonatomic) double countPerNs;
@property (readonly, nonatomic) double countPerMs;
@property (readonly, nonatomic) double countPerSecond;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL telemetryEnabled;

+ (id)_sumOfGroup1:(id)a0 group2:(id)a1 errorOut:(id *)a2;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_telemetryEnabledGroupDurations;
- (id)_addGroup:(id)a0;
- (id)_coreAnalyticsFieldName;
- (id)_initWithMetadataSegment:(id)a0 errorOut:(id *)a1;
- (id)_initWithName:(id)a0 count:(unsigned long long)a1 countUnit:(id)a2 telemetryEnabled:(BOOL)a3;
- (void)addToPayloadDictionary:(id)a0;

@end
