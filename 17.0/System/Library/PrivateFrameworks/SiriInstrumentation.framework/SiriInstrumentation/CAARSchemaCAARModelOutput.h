@class NSArray, NSData;

@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionModelOutputs;
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
- (id)actionModelOutputsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionModelOutputsCount;
- (void)addActionModelOutputs:(id)a0;
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;

@end
