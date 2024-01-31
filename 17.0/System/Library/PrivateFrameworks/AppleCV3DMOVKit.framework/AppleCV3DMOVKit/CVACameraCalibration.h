@class NSString, NSArray, NSNumber;

@interface CVACameraCalibration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *metadataID;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) double principalPointX;
@property (nonatomic) double principalPointY;
@property (nonatomic) double focalLengthX;
@property (nonatomic) double focalLengthY;
@property (nonatomic) long long lensDistortionModel;
@property (retain, nonatomic) NSArray *radialDistortion;
@property (retain, nonatomic) NSArray *tangentialDistortion;
@property (retain, nonatomic) NSArray *lensOffset;
@property (retain, nonatomic) NSArray *chipOffset;
@property (nonatomic) double timestampCorrection;
@property (retain, nonatomic) NSNumber *readoutTime;
@property (retain, nonatomic) NSArray *cameraToIMURotation;
@property (retain, nonatomic) NSArray *cameraToIMUTranslation;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
