@class NSData;

@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char syncTokenFetchRequestTransferLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned long long syncTokenFetchRequestTransferLatencyInMs;
@property (nonatomic) BOOL hasSyncTokenFetchRequestTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSyncTokenFetchRequestTransferLatencyInMs;

@end
