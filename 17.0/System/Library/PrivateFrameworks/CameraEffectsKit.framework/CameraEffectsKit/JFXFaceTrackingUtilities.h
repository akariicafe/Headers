@interface JFXFaceTrackingUtilities : NSObject

+ (id)JFX_faceAnchorWithFaceAnchor:(id)a0 forInterfaceOrientation:(long long)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })JFX_projectionMatrixWithFaceAnchor:(id)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
+ (void /* unknown type, empty encoding */)pointOnFaceMesh;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })adjustIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 forRenderSize:(struct CGSize { double x0; double x1; })a1 capturedSize:(struct CGSize { double x0; double x1; })a2 interfaceOrientation:(long long)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectInImageWithFaceAnchor:(id)a0 invertY:(BOOL)a1 interfaceOrientation:(long long)a2 imageResolution:(out struct CGSize { double x0; double x1; } *)a3;
+ (struct CGSize { double x0; double x1; })faceRectScaleFactorForInterfaceOrientation:(long long)a0 andDeviceInterfaceOrientation:(long long)a1;
+ (BOOL)isFaceAnchorInRange:(id)a0;
+ (double)rollAngleFromFaceAnchor:(id)a0 forInterfaceOrientation:(long long)a1;

@end
