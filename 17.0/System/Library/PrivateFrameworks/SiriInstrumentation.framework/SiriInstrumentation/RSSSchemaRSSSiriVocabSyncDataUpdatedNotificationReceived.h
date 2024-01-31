@class NSData;

@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char syncDataUpdateNotificationLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned long long syncDataUpdateNotificationLatencyInMs;
@property (nonatomic) BOOL hasSyncDataUpdateNotificationLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSyncDataUpdateNotificationLatencyInMs;

@end
