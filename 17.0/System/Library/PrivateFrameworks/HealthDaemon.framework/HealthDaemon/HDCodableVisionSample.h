@class NSString, HDCodableSample, HDCodableVerifiableData;

@interface HDCodableVisionSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char leftAddPower : 1; unsigned char leftAxis : 1; unsigned char leftBaseCurve : 1; unsigned char leftContactDiameter : 1; unsigned char leftCylinder : 1; unsigned char leftFarPupillaryDistance : 1; unsigned char leftNearPupillaryDistance : 1; unsigned char leftPrismAmount : 1; unsigned char leftPrismAngle : 1; unsigned char leftSphere : 1; unsigned char leftVertexDistance : 1; unsigned char prescriptionType : 1; unsigned char rightAddPower : 1; unsigned char rightAxis : 1; unsigned char rightBaseCurve : 1; unsigned char rightContactDiameter : 1; unsigned char rightCylinder : 1; unsigned char rightFarPupillaryDistance : 1; unsigned char rightNearPupillaryDistance : 1; unsigned char rightPrismAmount : 1; unsigned char rightPrismAngle : 1; unsigned char rightSphere : 1; unsigned char rightVertexDistance : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasPrescriptionType;
@property (nonatomic) long long prescriptionType;
@property (nonatomic) BOOL hasLeftSphere;
@property (nonatomic) double leftSphere;
@property (nonatomic) BOOL hasRightSphere;
@property (nonatomic) double rightSphere;
@property (nonatomic) BOOL hasLeftCylinder;
@property (nonatomic) double leftCylinder;
@property (nonatomic) BOOL hasRightCylinder;
@property (nonatomic) double rightCylinder;
@property (nonatomic) BOOL hasLeftAxis;
@property (nonatomic) double leftAxis;
@property (nonatomic) BOOL hasRightAxis;
@property (nonatomic) double rightAxis;
@property (nonatomic) BOOL hasLeftAddPower;
@property (nonatomic) double leftAddPower;
@property (nonatomic) BOOL hasRightAddPower;
@property (nonatomic) double rightAddPower;
@property (nonatomic) BOOL hasLeftVertexDistance;
@property (nonatomic) double leftVertexDistance;
@property (nonatomic) BOOL hasRightVertexDistance;
@property (nonatomic) double rightVertexDistance;
@property (nonatomic) BOOL hasLeftPrismAmount;
@property (nonatomic) double leftPrismAmount;
@property (nonatomic) BOOL hasRightPrismAmount;
@property (nonatomic) double rightPrismAmount;
@property (nonatomic) BOOL hasLeftPrismAngle;
@property (nonatomic) double leftPrismAngle;
@property (nonatomic) BOOL hasRightPrismAngle;
@property (nonatomic) double rightPrismAngle;
@property (nonatomic) BOOL hasLeftFarPupillaryDistance;
@property (nonatomic) double leftFarPupillaryDistance;
@property (nonatomic) BOOL hasRightFarPupillaryDistance;
@property (nonatomic) double rightFarPupillaryDistance;
@property (nonatomic) BOOL hasLeftNearPupillaryDistance;
@property (nonatomic) double leftNearPupillaryDistance;
@property (nonatomic) BOOL hasRightNearPupillaryDistance;
@property (nonatomic) double rightNearPupillaryDistance;
@property (readonly, nonatomic) BOOL hasGlassesDescription;
@property (retain, nonatomic) NSString *glassesDescription;
@property (nonatomic) BOOL hasLeftBaseCurve;
@property (nonatomic) double leftBaseCurve;
@property (nonatomic) BOOL hasRightBaseCurve;
@property (nonatomic) double rightBaseCurve;
@property (nonatomic) BOOL hasLeftContactDiameter;
@property (nonatomic) double leftContactDiameter;
@property (nonatomic) BOOL hasRightContactDiameter;
@property (nonatomic) double rightContactDiameter;
@property (readonly, nonatomic) BOOL hasBrand;
@property (retain, nonatomic) NSString *brand;
@property (readonly, nonatomic) BOOL hasVerifiableData;
@property (retain, nonatomic) HDCodableVerifiableData *verifiableData;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyToObject:(id)a0;

@end
