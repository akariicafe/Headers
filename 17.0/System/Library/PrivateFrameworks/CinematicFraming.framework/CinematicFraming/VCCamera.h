@class NSData, NSString;

@interface VCCamera : NSObject <NSCopying> {
    struct { void /* unknown type, empty encoding */ referenceSensorSize; struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrix; struct { void /* unknown type, empty encoding */ columns[3]; } inverseIntrinsicMatrix; float mmFactor; struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } inverseExtrinsicMatrix; BOOL hasGeometricDistortionCalibration; void /* unknown type, empty encoding */ geometricDistortionCenter; int forwardGeometricDistortionCalibrationRadius; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortion; int inverseGeometricDistortionCalibrationRadius; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortion; float stereographicFisheyeStrength; } _model;
    unsigned int _modelState;
}

@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; float x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; BOOL x5; int x6; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x7; int x8; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x9; float x10; } *model;
@property (nonatomic) void /* unknown type, empty encoding */ sensorSize;
@property (nonatomic) void /* unknown type, empty encoding */ focalLength;
@property (nonatomic) void /* unknown type, empty encoding */ principalPoint;
@property (nonatomic) float pixelSize;
@property (nonatomic) float zoomFactor;
@property (nonatomic) float fov;
@property (nonatomic) float zoomFOV;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (nonatomic) void /* unknown type, empty encoding */ rotation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } extrinsicMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } rotationMatrix;
@property (nonatomic) BOOL hasGeometricDistortionCalibration;
@property (nonatomic) int geometricDistortionCalibrationMaxRadius;
@property (nonatomic) void /* unknown type, empty encoding */ geometricDistortionCenter;
@property (retain, nonatomic) NSData *forwardGeometricDistortionPolynomial;
@property (retain, nonatomic) NSData *inverseGeometricDistortionPolynomial;
@property (nonatomic) float stereographicFisheyeStrength;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) int sensorID;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateModel;
- (void)_updateModelExtrinsicProperties;
- (void)_updateModelIntrinsicProperties;
- (void)_updateModelDistortionProperties;
- (void)_updateModelFisheyeProperties;
- (int)updateWithCalibration:(id)a0;

@end
