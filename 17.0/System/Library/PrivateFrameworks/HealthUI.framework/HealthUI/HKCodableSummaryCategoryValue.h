@interface HKCodableSummaryCategoryValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryCategoryValue_1 { unsigned char categoryValue : 1; unsigned char dateData : 1; } _has;
}

@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) long long categoryValue;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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
