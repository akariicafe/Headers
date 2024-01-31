@class NSString, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioInputRoute : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic) BOOL hasAudioInputRoute;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
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
- (void)deleteAudioInputRoute;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteSource;

@end
