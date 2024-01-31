@class NSArray, NSString, NSData;

@interface PLUSSchemaPLUSMediaSuggestionEvaluation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *entitySummaries;
@property (copy, nonatomic) NSArray *pommesAlternativeEntityIds;
@property (copy, nonatomic) NSString *pommesSelectedMediaEntityAdamId;
@property (nonatomic) BOOL hasPommesSelectedMediaEntityAdamId;
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId;
@property (nonatomic) BOOL hasInferredMediaEntityAdamId;
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
- (void)deleteInferredMediaEntityAdamId;
- (unsigned long long)pommesAlternativeEntityIdsCount;
- (void)clearPommesAlternativeEntityIds;
- (void)addEntitySummaries:(id)a0;
- (void)addPommesAlternativeEntityIds:(id)a0;
- (void)clearEntitySummaries;
- (void)deleteEntitySummaries;
- (void)deletePommesAlternativeEntityIds;
- (void)deletePommesSelectedMediaEntityAdamId;
- (id)entitySummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitySummariesCount;
- (id)pommesAlternativeEntityIdsAtIndex:(unsigned long long)a0;

@end
