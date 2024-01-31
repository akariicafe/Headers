@class NSString, NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) BOOL hasDatapackVersion;
@property (copy, nonatomic) NSArray *confusionPairs;
@property (retain, nonatomic) SISchemaUUID *asrId;
@property (nonatomic) BOOL hasAsrId;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
- (void)deleteErrorCode;
- (void)addConfusionPairs:(id)a0;
- (void)clearConfusionPairs;
- (id)confusionPairsAtIndex:(unsigned long long)a0;
- (unsigned long long)confusionPairsCount;
- (void)deleteAsrId;
- (void)deleteConfusionPairs;
- (void)deleteDatapackVersion;
- (void)deleteLinkId;

@end
