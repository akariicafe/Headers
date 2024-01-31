@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRChoiceInfo : SISchemaInstrumentationMessage {
    struct { unsigned char graphCost : 1; unsigned char acousticCost : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic) float graphCost;
@property (nonatomic) BOOL hasGraphCost;
@property (nonatomic) float acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
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
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)deleteGraphCost;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteAcousticCost;
- (void)deleteTokens;
- (unsigned long long)tokensCount;

@end
