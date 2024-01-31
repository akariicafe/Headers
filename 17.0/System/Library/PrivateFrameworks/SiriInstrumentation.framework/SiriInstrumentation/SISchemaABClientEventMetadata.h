@class NSData, SISchemaUUID;

@interface SISchemaABClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char timeIntervalSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
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
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (void)deleteTimeIntervalSince1970;

@end
