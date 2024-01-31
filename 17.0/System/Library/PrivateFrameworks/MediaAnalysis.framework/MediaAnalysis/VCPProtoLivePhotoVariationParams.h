@interface VCPProtoLivePhotoVariationParams : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char loopFadeLen : 1; unsigned char loopPeriod : 1; unsigned char loopStart : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasLoopFadeLen;
@property (nonatomic) int loopFadeLen;
@property (nonatomic) BOOL hasLoopPeriod;
@property (nonatomic) int loopPeriod;
@property (nonatomic) BOOL hasLoopStart;
@property (nonatomic) int loopStart;

+ (id)resultFromLegacyDictionary:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)exportToLegacyDictionary;

@end
