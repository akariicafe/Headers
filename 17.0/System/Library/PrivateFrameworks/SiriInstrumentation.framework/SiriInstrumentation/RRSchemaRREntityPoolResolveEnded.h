@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (unsigned long long)queryResultsCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addQueryResults:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)clearQueryResults;
- (id)initWithJSON:(id)a0;
- (void)deleteOutcome;
- (void)deleteQueryResults;

@end
