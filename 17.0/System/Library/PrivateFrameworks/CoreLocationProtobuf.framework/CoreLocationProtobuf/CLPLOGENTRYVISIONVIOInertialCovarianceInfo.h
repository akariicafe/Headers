@interface CLPLOGENTRYVISIONVIOInertialCovarianceInfo : PBCodable <NSCopying> {
    struct { unsigned char covarianceSizeInBytes : 1; unsigned char accelBiasCovOffset : 1; unsigned char accelBiasDof : 1; unsigned char covarianceSize : 1; unsigned char gyroBiasCovOffset : 1; unsigned char gyroBiasDof : 1; unsigned char orientationCovOffset : 1; unsigned char orientationDof : 1; unsigned char positionCovOffset : 1; unsigned char positionDof : 1; unsigned char velocityCovOffset : 1; unsigned char velocityDof : 1; } _has;
}

@property (nonatomic) BOOL hasCovarianceSizeInBytes;
@property (nonatomic) unsigned long long covarianceSizeInBytes;
@property (nonatomic) BOOL hasCovarianceSize;
@property (nonatomic) unsigned int covarianceSize;
@property (nonatomic) BOOL hasOrientationCovOffset;
@property (nonatomic) unsigned int orientationCovOffset;
@property (nonatomic) BOOL hasOrientationDof;
@property (nonatomic) unsigned int orientationDof;
@property (nonatomic) BOOL hasGyroBiasCovOffset;
@property (nonatomic) unsigned int gyroBiasCovOffset;
@property (nonatomic) BOOL hasGyroBiasDof;
@property (nonatomic) unsigned int gyroBiasDof;
@property (nonatomic) BOOL hasVelocityCovOffset;
@property (nonatomic) unsigned int velocityCovOffset;
@property (nonatomic) BOOL hasVelocityDof;
@property (nonatomic) unsigned int velocityDof;
@property (nonatomic) BOOL hasAccelBiasCovOffset;
@property (nonatomic) unsigned int accelBiasCovOffset;
@property (nonatomic) BOOL hasAccelBiasDof;
@property (nonatomic) unsigned int accelBiasDof;
@property (nonatomic) BOOL hasPositionCovOffset;
@property (nonatomic) unsigned int positionCovOffset;
@property (nonatomic) BOOL hasPositionDof;
@property (nonatomic) unsigned int positionDof;

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
