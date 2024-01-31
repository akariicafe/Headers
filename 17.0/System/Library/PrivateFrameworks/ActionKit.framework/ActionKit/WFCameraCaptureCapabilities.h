@class CAMCaptureCapabilities;

@interface WFCameraCaptureCapabilities : NSObject

@property (class, readonly, nonatomic) WFCameraCaptureCapabilities *capabilities;

@property (readonly, nonatomic) CAMCaptureCapabilities *capabilities;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isSupportedMode:(long long)a0 withDevice:(long long)a1;

@end
