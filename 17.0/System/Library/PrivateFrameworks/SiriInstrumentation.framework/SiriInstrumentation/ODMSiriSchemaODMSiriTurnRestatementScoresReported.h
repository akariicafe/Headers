@class NSArray, NSData;

@interface ODMSiriSchemaODMSiriTurnRestatementScoresReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *siriTurnRestatementScores;
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
- (void)deleteSiriTurnRestatementScores;
- (void)addSiriTurnRestatementScores:(id)a0;
- (void)clearSiriTurnRestatementScores;
- (id)siriTurnRestatementScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)siriTurnRestatementScoresCount;

@end
