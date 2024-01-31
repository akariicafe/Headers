@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *collatedActionCandidates;
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
- (void)addCollatedActionCandidates:(id)a0;
- (void)clearCollatedActionCandidates;
- (id)collatedActionCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)collatedActionCandidatesCount;
- (void)deleteCollatedActionCandidates;

@end
