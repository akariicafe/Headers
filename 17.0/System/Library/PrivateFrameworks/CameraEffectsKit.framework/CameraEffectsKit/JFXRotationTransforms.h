@interface JFXRotationTransforms : NSObject

+ (int)rotationFromCaptureDevicePosition:(long long)a0 captureVideoOrientation:(long long)a1 toInterfaceOrientation:(long long)a2;
+ (int)rotationFromUIInterfaceOrientation:(long long)a0 toUIInterfaceOrientation:(long long)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromCaptureDevicePosition:(long long)a0 captureVideoOrientation:(long long)a1 toInterfaceOrientation:(long long)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromTopLeftCaptureDevicePivotPosition:(long long)a0 captureVideoOrientation:(long long)a1 toInterfaceOrientation:(long long)a2 size:(struct CGSize { double x0; double x1; })a3;

@end
