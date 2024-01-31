@class NSString, NSMutableArray;

@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying>

@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL hasStepIdentifier;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSMutableArray *cachedHeroImages;

+ (Class)cachedHeroImagesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsProtocolVersion:(id)a0;
- (void)addCachedHeroImages:(id)a0;
- (id)cachedHeroImagesAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedHeroImagesCount;
- (void)clearCachedHeroImages;
- (id)protocolVersionAsString:(int)a0;

@end
