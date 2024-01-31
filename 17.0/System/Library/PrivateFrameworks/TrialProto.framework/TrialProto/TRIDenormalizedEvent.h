@class TRITrialSystemTelemetry, TRIMLRuntimeDimensions, TRISubject, NSMutableArray, TRISystemDimensions;

@interface TRIDenormalizedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (readonly, nonatomic) BOOL hasTrialSystemTelemetry;
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry;
@property (readonly, nonatomic) BOOL hasMlruntimeDimensions;
@property (retain, nonatomic) TRIMLRuntimeDimensions *mlruntimeDimensions;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

- (void)addTreatment:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (id)metricAtIndex:(unsigned long long)a0;
- (void)addUserDimension:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMetric:(id)a0;
- (id)description;
- (unsigned long long)metricsCount;
- (unsigned long long)treatmentsCount;
- (void).cxx_destruct;
- (id)userDimensionAtIndex:(unsigned long long)a0;
- (void)clearMetrics;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearTreatments;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearUserDimensions;
- (unsigned long long)userDimensionsCount;

@end
