@class NSArray, NSData, SISchemaUUID;

@interface TTMSchemaTTMOverrideTCUFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (copy, nonatomic) NSArray *failures;
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
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (void)deleteFailures;
- (void)deleteTcuId;
- (id)failuresAtIndex:(unsigned long long)a0;
- (unsigned long long)failuresCount;

@end
