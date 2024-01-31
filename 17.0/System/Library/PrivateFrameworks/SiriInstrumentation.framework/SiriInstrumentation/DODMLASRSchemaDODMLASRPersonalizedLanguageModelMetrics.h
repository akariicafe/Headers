@class DODMLASRSchemaDODMLASRModelMetrics, DODMLASRSchemaDODMLASRTranscriptionMetrics, NSData, DODMLASRSchemaDODMLASREvaluationMetrics;

@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char userLocale : 1; } _has;
}

@property (nonatomic) int userLocale;
@property (nonatomic) BOOL hasUserLocale;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics;
@property (nonatomic) BOOL hasTranscriptionMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics;
@property (nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics;
@property (nonatomic) BOOL hasEvaluationMetrics;
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
- (void)deleteEvaluationMetrics;
- (void)deleteModelMetrics;
- (void)deleteTranscriptionMetrics;
- (void)deleteUserLocale;

@end
