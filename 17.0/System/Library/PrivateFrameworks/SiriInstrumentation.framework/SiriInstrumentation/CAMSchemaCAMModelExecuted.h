@class NSData, SISchemaAsset, CAMSchemaCAMModelId;

@interface CAMSchemaCAMModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char prediction : 1; unsigned char predictionScore : 1; unsigned char predictionThreshold : 1; unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) CAMSchemaCAMModelId *modelId;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int prediction;
@property (nonatomic) BOOL hasPrediction;
@property (nonatomic) float predictionScore;
@property (nonatomic) BOOL hasPredictionScore;
@property (nonatomic) float predictionThreshold;
@property (nonatomic) BOOL hasPredictionThreshold;
@property (nonatomic) BOOL isShadowLog;
@property (nonatomic) BOOL hasIsShadowLog;
@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelId;
- (void)deletePrediction;
- (void)deletePredictionScore;
- (void)deletePredictionThreshold;

@end
