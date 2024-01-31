@class NSArray, NSString, AVCaptureDeviceFormat, AVCaptureDevice;

@interface ARVideoFormat : NSObject <ARDaemonSecureCoding, NSCopying> {
    AVCaptureDevice *_device;
    AVCaptureDeviceFormat *_deviceFormat;
    unsigned int _pixelFormat;
    struct CGSize { double width; double height; } _imageResolution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *frameRatesByPowerUsage;
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (readonly, nonatomic) AVCaptureDeviceFormat *deviceFormat;
@property (readonly, nonatomic) AVCaptureDeviceFormat *depthDataFormat;
@property (readonly, nonatomic) NSString *pixelFormat;
@property (readonly, nonatomic) BOOL isX420PixelFormat;
@property (readonly, nonatomic) BOOL has4KVideoResolution;
@property (readonly, nonatomic) long long captureDevicePosition;
@property (readonly, nonatomic) NSString *captureDeviceType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageResolution;
@property (readonly, nonatomic) long long framesPerSecond;
@property (readonly, nonatomic) BOOL isRecommendedForHighResolutionFrameCapturing;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;

+ (id)bestDepthFormatForDeviceFormat:(id)a0;
+ (id)_querySupportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2 frameRate:(double)a3;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)a0 depthSensorNumberOfPointsMode:(long long)a1 frameRates:(id)a2;
+ (id)bestTimeOfFlightFormatForDevicePosition:(long long)a0 frameRates:(id)a1;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRate:(double)a3 videoBinned:(BOOL)a4;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRate:(double)a3 videoBinned:(BOOL)a4 needsHDRSupport:(BOOL)a5;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRate:(double)a3 videoBinned:(BOOL)a4 needsHDRSupport:(BOOL)a5 pixelFormat:(unsigned int)a6;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRates:(id)a3 videoBinned:(BOOL)a4;
+ (id)bestVideoFormatForDevicePosition:(long long)a0 deviceType:(id)a1 resolution:(struct { int x0; int x1; })a2 frameRates:(id)a3 videoBinned:(BOOL)a4 needsHDRSupport:(BOOL)a5 pixelFormat:(unsigned int)a6;
+ (struct CGSize { double x0; double x1; })hiResVideoDimensions;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 frameRate:(double)a2;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2;
+ (id)supportedVideoFormatsForDevicePosition:(long long)a0 deviceType:(id)a1 videoBinned:(BOOL)a2 frameRate:(double)a3;
+ (id)supportedVideoFormatsForHiResOrX420;
+ (id)supportedVideoFormatsForStillImageCapture;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)setDepthDataFormat:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)videoFormatWithDepthDataFormat:(id)a0;
- (id)initWithCaptureDevice:(id)a0 format:(id)a1;
- (id)initWithImageResolution:(struct CGSize { double x0; double x1; })a0 captureDevicePosition:(long long)a1 captureDeviceType:(id)a2;
- (id)initWithImageResolution:(struct CGSize { double x0; double x1; })a0 captureDevicePosition:(long long)a1 captureDeviceType:(id)a2 frameRatesByPowerUsage:(id)a3;
- (id)initWithImageResolution:(struct CGSize { double x0; double x1; })a0 captureDevicePosition:(long long)a1 captureDeviceType:(id)a2 frameRatesByPowerUsage:(id)a3 pixelFormat:(unsigned int)a4;
- (id)videoFormatWithUnthrottledLowPowerUsageFramerate;

@end
