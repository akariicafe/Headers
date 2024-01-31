@class NSArray, NSDictionary;

@interface DeskCamSessionInputMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bodyDetections;
@property (readonly, nonatomic) NSArray *faceDetections;
@property (readonly, nonatomic) NSDictionary *cameraCalibrationDictionary;
@property (readonly, nonatomic) int cameraOrientation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, nonatomic) float aspectRatio;
@property (readonly, nonatomic) int sensorID;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ gravity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDetectedObjectsInfo:(SEL)a0 cameraCalibrationData:(id)a1 cameraOrientation:(id)a2 timestamp:(int)a3 aspectRatio:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 sensorID:(float)a5 gravity:(int)a6;
- (id)_createCameraCalibrationDictionary:(id)a0;
- (void)_parseDetectedObjectsInfo:(id)a0;

@end
