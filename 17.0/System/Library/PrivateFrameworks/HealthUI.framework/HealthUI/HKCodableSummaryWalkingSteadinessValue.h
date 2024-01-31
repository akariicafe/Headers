@class HKCodableSummaryQuantityValue, HKCodableLevelViewDataConfiguration;

@interface HKCodableSummaryWalkingSteadinessValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryWalkingSteadinessValue_1 { unsigned char classificationRawValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQuantity;
@property (retain, nonatomic) HKCodableSummaryQuantityValue *quantity;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) long long classificationRawValue;
@property (readonly, nonatomic) BOOL hasLevelViewDataConfiguration;
@property (retain, nonatomic) HKCodableLevelViewDataConfiguration *levelViewDataConfiguration;

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
