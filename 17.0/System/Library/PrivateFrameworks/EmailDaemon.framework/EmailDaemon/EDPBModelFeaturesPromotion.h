@class NSString;

@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {
    struct { unsigned char headerKeyFilteredCount : 1; unsigned char toCount : 1; unsigned char unknownFeatureCount : 1; } _has;
}

@property (nonatomic) BOOL hasUnknownFeatureCount;
@property (nonatomic) unsigned int unknownFeatureCount;
@property (nonatomic) BOOL hasToCount;
@property (nonatomic) unsigned int toCount;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasHeaderKeyFilteredCount;
@property (nonatomic) unsigned int headerKeyFilteredCount;

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

@end
