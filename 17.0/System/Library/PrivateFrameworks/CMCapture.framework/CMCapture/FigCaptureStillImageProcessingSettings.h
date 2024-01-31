@class NSDictionary;

@interface FigCaptureStillImageProcessingSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float uiZoomFactor;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) struct { int width; int height; } sensorRawDimensions;
@property (nonatomic) struct { int width; int height; } ultraHighResSensorRawDimensions;
@property (copy, nonatomic) NSDictionary *cameraInfoByPortType;
@property (copy, nonatomic) NSDictionary *moduleCalibrationByPortType;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
