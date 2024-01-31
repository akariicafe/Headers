@class NSData, NSString;

@interface SISchemaClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventGeneratedRelativeToBootTimeTimestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *eventGeneratedTimestampRefId;
@property (nonatomic) BOOL hasEventGeneratedTimestampRefId;
@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic) BOOL hasEventGeneratedRelativeToBootTimeTimestampNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventGeneratedRelativeToBootTimeTimestampNs;
- (void)deleteEventGeneratedTimestampRefId;
- (void)deleteSiriDeviceID;
- (void)deleteTurnID;

@end
