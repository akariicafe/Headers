@class NSData, SISchemaUUID;

@interface SUTSchemaTestExecutionMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *fingerprint;
@property (nonatomic) BOOL hasFingerprint;
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
- (void)deleteFingerprint;

@end
