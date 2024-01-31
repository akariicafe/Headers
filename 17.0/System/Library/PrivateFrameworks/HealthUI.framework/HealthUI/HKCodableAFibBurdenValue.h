@class HKCodableQuantity, HKCodableDayIndexRange;

@interface HKCodableAFibBurdenValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableAFibBurdenValue_1 { unsigned char valueClamped : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (readonly, nonatomic) BOOL hasDayIndexRange;
@property (retain, nonatomic) HKCodableDayIndexRange *dayIndexRange;
@property (nonatomic) BOOL hasValueClamped;
@property (nonatomic) BOOL valueClamped;

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
