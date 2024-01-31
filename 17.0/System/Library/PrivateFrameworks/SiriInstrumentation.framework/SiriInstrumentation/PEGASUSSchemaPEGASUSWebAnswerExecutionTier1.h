@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) BOOL hasAnswerId;
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
- (void)deleteAnswerId;

@end
