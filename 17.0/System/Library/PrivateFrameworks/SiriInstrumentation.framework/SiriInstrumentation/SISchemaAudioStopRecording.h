@class NSData;

@interface SISchemaAudioStopRecording : SISchemaInstrumentationMessage {
    struct { unsigned char endpointType : 1; } _has;
}

@property (nonatomic) int endpointType;
@property (nonatomic) BOOL hasEndpointType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointType;

@end
