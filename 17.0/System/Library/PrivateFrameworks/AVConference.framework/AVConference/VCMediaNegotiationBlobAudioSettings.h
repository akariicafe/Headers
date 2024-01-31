@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {
    struct { unsigned char audioUnitModel : 1; } _has;
}

@property (readonly, nonatomic) BOOL allowAudioRecording;
@property (readonly, nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) BOOL hasAudioUnitModel;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) unsigned int supportFlags;
@property (nonatomic) unsigned int payloadFlags;
@property (nonatomic) unsigned int secondaryFlags;
@property (nonatomic) BOOL useSBR;

+ (BOOL)isAudioPayloadSupported:(int)a0;
+ (int)negotiationPayloadFromPayload:(int)a0;
+ (int)payloadFromNegotiationPayload:(int)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAudioConfiguration:(id)a0;
- (id)newMediaNegotiatorAudioConfiguration;
- (void)printWithLogFile:(void *)a0;

@end
