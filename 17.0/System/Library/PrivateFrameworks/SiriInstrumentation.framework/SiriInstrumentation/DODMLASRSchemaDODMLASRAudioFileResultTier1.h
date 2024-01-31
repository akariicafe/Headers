@class ASRSchemaASRRecognitionResultTier1, NSData;

@interface DODMLASRSchemaDODMLASRAudioFileResultTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResult;
@property (nonatomic) BOOL hasRecognitionResult;
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
- (void)deleteRecognitionResult;

@end
