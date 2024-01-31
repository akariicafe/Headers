@class SGMIMetricsTrialMetadata, SGMIMetricsAggregatedAccuracyLog;

@interface SGMIMetricsAggregatedAccuracyLogs : PBCodable <NSCopying> {
    struct { unsigned char hoursSinceReference : 1; } _has;
}

@property (nonatomic) BOOL hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) BOOL hasActiveTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *activeTrialMetadata;
@property (readonly, nonatomic) BOOL hasActiveAggregatedAccuracyLogForThePastFourWeeks;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) BOOL hasActiveAggregatedAccuracyLogSinceModelInitialization;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogSinceModelInitialization;
@property (readonly, nonatomic) BOOL hasBackgroundTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata;
@property (readonly, nonatomic) BOOL hasBackgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) BOOL hasBackgroundAggregatedAccuracyLogSinceModelInitialization;
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogSinceModelInitialization;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
