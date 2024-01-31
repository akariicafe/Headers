@class NSString, SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaTextToSpeechBegin : SISchemaInstrumentationMessage {
    struct { unsigned char audioOutputRoute : 1; } _has;
}

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
@property (nonatomic) int audioOutputRoute;
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID;
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
- (void)deleteHardwareInterfaceVendorID;
- (void)deleteAceID;
- (void)deleteAudioOutputRoute;

@end
