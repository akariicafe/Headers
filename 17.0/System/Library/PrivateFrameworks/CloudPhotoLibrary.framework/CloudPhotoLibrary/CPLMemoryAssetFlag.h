@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {
    struct { unsigned char isAdaptiveExplictlyAdded : 1; unsigned char isAdaptiveExplictlyRemoved : 1; unsigned char isAdaptiveKeyAssetPrivate : 1; unsigned char isAdaptiveKeyAssetShared : 1; unsigned char isCurated : 1; unsigned char isCustomUserAsset : 1; unsigned char isExtendedCurated : 1; unsigned char isKeyAsset : 1; unsigned char isMovieCurated : 1; unsigned char isRepresentative : 1; unsigned char isUserCurated : 1; } _has;
}

@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL isRepresentative;
@property (nonatomic) BOOL hasIsCurated;
@property (nonatomic) BOOL isCurated;
@property (nonatomic) BOOL hasIsMovieCurated;
@property (nonatomic) BOOL isMovieCurated;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL isKeyAsset;
@property (nonatomic) BOOL hasIsExtendedCurated;
@property (nonatomic) BOOL isExtendedCurated;
@property (nonatomic) BOOL hasIsUserCurated;
@property (nonatomic) BOOL isUserCurated;
@property (nonatomic) BOOL hasIsCustomUserAsset;
@property (nonatomic) BOOL isCustomUserAsset;
@property (nonatomic) BOOL hasIsAdaptiveExplictlyAdded;
@property (nonatomic) BOOL isAdaptiveExplictlyAdded;
@property (nonatomic) BOOL hasIsAdaptiveExplictlyRemoved;
@property (nonatomic) BOOL isAdaptiveExplictlyRemoved;
@property (nonatomic) BOOL hasIsAdaptiveKeyAssetPrivate;
@property (nonatomic) BOOL isAdaptiveKeyAssetPrivate;
@property (nonatomic) BOOL hasIsAdaptiveKeyAssetShared;
@property (nonatomic) BOOL isAdaptiveKeyAssetShared;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
