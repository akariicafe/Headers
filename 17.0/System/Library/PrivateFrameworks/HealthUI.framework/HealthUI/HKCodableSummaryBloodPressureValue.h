@class HKCodableQuantity;

@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryBloodPressureValue_1 { unsigned char timestampData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSystolicValue;
@property (retain, nonatomic) HKCodableQuantity *systolicValue;
@property (readonly, nonatomic) BOOL hasDiastolicValue;
@property (retain, nonatomic) HKCodableQuantity *diastolicValue;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

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
