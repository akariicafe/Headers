@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain) NSString *type;
@property (retain) AVCaptureInput *input;
@property (retain) AVMetadataObject *originalMetadataObject;
@property long long groupID;
@property unsigned long long syntheticFocusMode;
@property long long detectionSource;

- (id)init;
- (void)dealloc;

@end
