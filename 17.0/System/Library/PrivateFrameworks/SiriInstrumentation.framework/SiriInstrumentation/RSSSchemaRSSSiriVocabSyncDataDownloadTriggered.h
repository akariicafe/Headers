@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char trigger : 1; unsigned char syncData : 1; } _has;
}

@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int syncData;
@property (nonatomic) BOOL hasSyncData;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSyncData;
- (void)deleteTrigger;

@end
