@class HKCodableQuantity, HKCodablePrescriptionType;

@interface HKCodableSummaryVisionPrescriptionValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryVisionPrescriptionValue_1 { unsigned char timestampData : 1; unsigned char hasImage : 1; } _has;
}

@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;
@property (readonly, nonatomic) BOOL hasPrescriptionType;
@property (retain, nonatomic) HKCodablePrescriptionType *prescriptionType;
@property (nonatomic) BOOL hasHasImage;
@property (nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasLeftEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *leftEyeSphere;
@property (readonly, nonatomic) BOOL hasRightEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *rightEyeSphere;

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
