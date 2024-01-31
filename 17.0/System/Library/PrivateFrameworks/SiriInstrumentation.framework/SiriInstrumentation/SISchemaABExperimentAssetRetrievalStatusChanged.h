@class NSString, NSData;

@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    struct { unsigned char retrievalStatusCode : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) int retrievalStatusCode;
@property (nonatomic) BOOL hasRetrievalStatusCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetId;
- (void)deleteExperimentId;
- (void)deleteRetrievalStatusCode;

@end
