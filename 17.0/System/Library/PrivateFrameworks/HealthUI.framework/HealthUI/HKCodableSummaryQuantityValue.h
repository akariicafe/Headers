@class HKCodableQuantity;

@interface HKCodableSummaryQuantityValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryQuantityValue_1 { unsigned char dateData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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
