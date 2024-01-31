@class NSSet;

@interface VCMediaNegotiationBlobV2MomentsSettings : PBCodable <NSCopying> {
    struct { unsigned char capabilities : 1; unsigned char supportedCodecs : 1; } _has;
}

@property (readonly, nonatomic) NSSet *videoCodecs;
@property (readonly, nonatomic) NSSet *imageTypes;
@property (readonly, nonatomic) unsigned char capabilitiesOneToOne;
@property (readonly, nonatomic) unsigned char capabilitiesMultiway;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL hasSupportedCodecs;
@property (nonatomic) unsigned int supportedCodecs;

+ (id)videoCodecsWithSupportedCodecs:(unsigned int)a0;
+ (unsigned int)blobCapabilitiesWithOneToOneCapabilities:(unsigned char)a0 multiwayCapabilities:(unsigned char)a1;
+ (unsigned char)capabilitiesWithBlobCapabilities:(unsigned int)a0;
+ (id)imageTypesWithSupportedCodecs:(unsigned int)a0;
+ (unsigned char)multiwayCapabilitiesWithBlobCapabilities:(unsigned int)a0;
+ (unsigned int)supportedCodecsWithVideoCodecs:(id)a0 imageTypes:(id)a1;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendFieldName:(id)a0 codecs:(unsigned int)a1 outString:(id)a2;
- (id)initWithVideoCodecs:(id)a0 imageTypes:(id)a1 capabilitiesOneToOne:(unsigned char)a2 capabilitiesMultiway:(unsigned char)a3;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;

@end
