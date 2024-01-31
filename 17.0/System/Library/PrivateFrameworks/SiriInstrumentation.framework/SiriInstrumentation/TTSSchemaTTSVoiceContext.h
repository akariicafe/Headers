@class NSData;

@interface TTSSchemaTTSVoiceContext : SISchemaInstrumentationMessage {
    struct { unsigned char voiceType : 1; unsigned char voiceFootprint : 1; unsigned char voiceVersion : 1; unsigned char resourceVersion : 1; } _has;
}

@property (nonatomic) int voiceType;
@property (nonatomic) BOOL hasVoiceType;
@property (nonatomic) int voiceFootprint;
@property (nonatomic) BOOL hasVoiceFootprint;
@property (nonatomic) unsigned int voiceVersion;
@property (nonatomic) BOOL hasVoiceVersion;
@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) BOOL hasResourceVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVoiceType;
- (void)deleteResourceVersion;
- (void)deleteVoiceFootprint;
- (void)deleteVoiceVersion;

@end
