@interface SGMIMetricsAggregatedAccuracyLog : PBCodable <NSCopying> {
    struct { unsigned char ignorablePredictedAsIgnorable : 1; unsigned char ignorablePredictedAsNeutral : 1; unsigned char ignorablePredictedAsSalient : 1; unsigned char neutralPredictedAsIgnorable : 1; unsigned char neutralPredictedAsNeutral : 1; unsigned char neutralPredictedAsSalient : 1; unsigned char salientPredictedAsIgnorable : 1; unsigned char salientPredictedAsNeutral : 1; unsigned char salientPredictedAsSalient : 1; } _has;
}

@property (nonatomic) BOOL hasSalientPredictedAsSalient;
@property (nonatomic) unsigned int salientPredictedAsSalient;
@property (nonatomic) BOOL hasSalientPredictedAsNeutral;
@property (nonatomic) unsigned int salientPredictedAsNeutral;
@property (nonatomic) BOOL hasSalientPredictedAsIgnorable;
@property (nonatomic) unsigned int salientPredictedAsIgnorable;
@property (nonatomic) BOOL hasNeutralPredictedAsSalient;
@property (nonatomic) unsigned int neutralPredictedAsSalient;
@property (nonatomic) BOOL hasNeutralPredictedAsNeutral;
@property (nonatomic) unsigned int neutralPredictedAsNeutral;
@property (nonatomic) BOOL hasNeutralPredictedAsIgnorable;
@property (nonatomic) unsigned int neutralPredictedAsIgnorable;
@property (nonatomic) BOOL hasIgnorablePredictedAsSalient;
@property (nonatomic) unsigned int ignorablePredictedAsSalient;
@property (nonatomic) BOOL hasIgnorablePredictedAsNeutral;
@property (nonatomic) unsigned int ignorablePredictedAsNeutral;
@property (nonatomic) BOOL hasIgnorablePredictedAsIgnorable;
@property (nonatomic) unsigned int ignorablePredictedAsIgnorable;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
