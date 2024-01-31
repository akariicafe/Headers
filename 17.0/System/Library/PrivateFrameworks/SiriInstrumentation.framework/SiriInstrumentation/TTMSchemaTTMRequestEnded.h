@class NSArray, NSData;

@interface TTMSchemaTTMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearResults;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResults;

@end
