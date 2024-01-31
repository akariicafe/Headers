@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupPayload : PBCodable <NSCopying> {
    struct { unsigned char cipherSuite : 1; unsigned char codecType : 1; unsigned char encoderUsage : 1; unsigned char mediaFlags : 1; unsigned char pTime : 1; unsigned char profileLevelId : 1; unsigned char rtcpFlags : 1; unsigned char rtpPayload : 1; unsigned char rtpSampleRate : 1; } _has;
}

@property (nonatomic) BOOL hasCodecType;
@property (nonatomic) unsigned int codecType;
@property (nonatomic) BOOL hasRtpPayload;
@property (nonatomic) unsigned int rtpPayload;
@property (nonatomic) BOOL hasPTime;
@property (nonatomic) unsigned int pTime;
@property (nonatomic) BOOL hasRtcpFlags;
@property (nonatomic) unsigned int rtcpFlags;
@property (nonatomic) BOOL hasMediaFlags;
@property (nonatomic) unsigned int mediaFlags;
@property (nonatomic) BOOL hasProfileLevelId;
@property (nonatomic) unsigned int profileLevelId;
@property (nonatomic) BOOL hasRtpSampleRate;
@property (nonatomic) unsigned int rtpSampleRate;
@property (nonatomic) BOOL hasCipherSuite;
@property (nonatomic) unsigned int cipherSuite;
@property (readonly, nonatomic) BOOL hasPackedPayload;
@property (retain, nonatomic) NSData *packedPayload;
@property (nonatomic) BOOL hasEncoderUsage;
@property (nonatomic) unsigned int encoderUsage;

+ (unsigned int)cipherSuiteWithNegotiationCipherSuite:(unsigned int)a0;
+ (long long)codecTypeWithNegotiationCodecType:(unsigned int)a0;
+ (id)defaultDataCodecConfig;
+ (id)defaultFTXTCodecConfig;
+ (id)defaultMMJIConfig;
+ (id)defaultMoCapConfig;
+ (id)defaultPayloadConfigurationsForStreamGroupID:(unsigned int)a0;
+ (unsigned int)defaultRTPSampleRateForStreamGroupID:(unsigned int)a0;
+ (BOOL)isDefaultPayloadConfig:(id)a0 index:(unsigned int)a1 rtpSampleRate:(unsigned int)a2 streamGroupID:(unsigned int)a3;
+ (BOOL)isNegotiationCodecTypeAudio:(unsigned int)a0;
+ (BOOL)isPTimePackable:(unsigned int)a0;
+ (unsigned int)mediaFlagsWithPayloadConfig:(id)a0;
+ (unsigned int)negotiationCipherSuiteWithCipherSuite:(unsigned int)a0;
+ (unsigned int)negotiationCodecTypeWithCodecType:(long long)a0;
+ (unsigned char)negotiationPackedPTimeWithPTime:(unsigned int)a0;
+ (int)negotiationPackedRtpSampleRateWithRTPSampleRate:(unsigned int)a0;
+ (unsigned int)pTimeWithNegotiationPackedPTime:(unsigned char)a0;
+ (void)printWithLogFile:(void *)a0 prefix:(id)a1 payloadConfig:(id)a2;
+ (id)rtcpFlagStringWithPayloadConfig:(id)a0;
+ (unsigned int)rtcpFlagsWithPayloadConfig:(id)a0;
+ (unsigned int)rtpSampleRateWithNegotiationPackedSampleRate:(int)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)rtpSampleRateWithStreamGroupID:(unsigned int)a0;
- (void)getStreamGroupPayload:(struct tagStreamGroupPayload { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; union { struct { unsigned char x0; unsigned char x1; } x0; struct { unsigned int x0; unsigned char x1; } x1; } x5; } *)a0;
- (id)initWithPayloadConfig:(id)a0 index:(unsigned int)a1 rtpSampleRate:(unsigned int)a2 streamGroupID:(unsigned int)a3;
- (id)initWithPayloadConfig:(id)a0 rtpSampleRate:(unsigned int)a1;
- (id)newCompactPayloadWithPayloadConfig:(id)a0 rtpSampleRate:(unsigned int)a1;
- (id)payloadConfigurationWithPayloadConfig:(id)a0;
- (id)payloadConfigurationWithStreamGroupID:(unsigned int)a0 index:(unsigned int)a1;
- (void)setNegotiationPackedPayloadWithStreamGroupPayload:(struct tagStreamGroupPayload { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; union { struct { unsigned char x0; unsigned char x1; } x0; struct { unsigned int x0; unsigned char x1; } x1; } x5; } *)a0;

@end
