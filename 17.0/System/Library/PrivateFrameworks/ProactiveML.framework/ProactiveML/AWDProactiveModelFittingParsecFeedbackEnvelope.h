@class AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLogRegWeights, AWDProactiveModelFittingLinRegObjectiveFeatures;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEvaluation;
@property (retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation;
@property (readonly, nonatomic) BOOL hasLogRegWeights;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights;
@property (readonly, nonatomic) BOOL hasLogRegGradient;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient;
@property (readonly, nonatomic) BOOL hasLinRegFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix;
@property (readonly, nonatomic) BOOL hasLinRegObjectiveFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures;

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
