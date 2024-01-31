@interface JFXExternalImageData : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) long long captureFramesPerSecond;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL hasValidFaceData;
@property (nonatomic) BOOL requiresFaceTracking;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceRect;
@property (nonatomic) double rollAngle;

- (void)dealloc;

@end
