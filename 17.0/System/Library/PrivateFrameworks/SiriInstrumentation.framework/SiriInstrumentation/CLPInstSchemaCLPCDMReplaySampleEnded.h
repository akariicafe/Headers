@class NSArray, NSData;

@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isReplaySuccessful : 1; } _has;
}

@property (nonatomic) BOOL isReplaySuccessful;
@property (nonatomic) BOOL hasIsReplaySuccessful;
@property (copy, nonatomic) NSArray *comparatorResults;
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
- (void)addComparatorResults:(id)a0;
- (void)clearComparatorResults;
- (id)comparatorResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)comparatorResultsCount;
- (void)deleteComparatorResults;
- (void)deleteIsReplaySuccessful;

@end
