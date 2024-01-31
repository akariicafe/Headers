@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying> {
    struct { unsigned char maxMediaBitrate : 1; unsigned char maxNetworkBitrate : 1; unsigned char maxPacketsPerSecond : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char repairedStreamID : 1; unsigned char supportedPayloads : 1; } _has;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) BOOL hasSupportedPayloads;
@property (nonatomic) unsigned int supportedPayloads;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) float maxPacketsPerSecond;
@property (nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStreamConfig:(id)a0;
- (id)newMultiwayAudioStream;
- (void)printWithLogFile:(void *)a0;
- (void)setPayloadFlagsWithPayloads:(id)a0;

@end
