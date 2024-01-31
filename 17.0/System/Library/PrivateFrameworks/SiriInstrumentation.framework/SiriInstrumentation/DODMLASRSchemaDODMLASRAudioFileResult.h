@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRAudioFileResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *asrId;
@property (nonatomic) BOOL hasAsrId;
@property (copy, nonatomic) NSArray *decodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addDecodingResults:(id)a0;
- (void)clearDecodingResults;
- (id)decodingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)decodingResultsCount;
- (void)deleteAsrId;
- (void)deleteDecodingResults;
- (void)deleteLinkId;

@end
