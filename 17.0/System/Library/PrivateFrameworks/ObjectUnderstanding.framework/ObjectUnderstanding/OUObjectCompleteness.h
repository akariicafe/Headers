@interface OUObjectCompleteness : NSObject

- (void)updateRawCornersStatusNoTimer:(id)a0 withOldObjects:(id)a1 cameraPose:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a2 camera:(id)a3;
- (BOOL)checkBoxFaceCompleteness:(struct box3d { void /* unknown type, empty encoding */ x0[8]; })a0 faceIndex:(int)a1 boxType:(id)a2 pointCloud:(id)a3;
- (BOOL)isPointInCameraView:(SEL)a0 cameraPose:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a1 camera:(id)a2 marginRatio:(float)a3;
- (void)updateRawCornersStatus:(id)a0 withOldObjects:(id)a1 cameraPose:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a2 camera:(id)a3;
- (void)updateRawFacesStatus:(id)a0 withOldObjects:(id)a1 pointCloud:(id)a2 cameraPose:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a3 camera:(id)a4;

@end
