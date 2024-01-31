@class NSDictionary;

@interface CIFaceFeature : CIFeature

@property (readonly) NSDictionary *landmarks;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) BOOL hasLeftEyePosition;
@property (readonly) struct CGPoint { double x; double y; } leftEyePosition;
@property (readonly) BOOL hasRightEyePosition;
@property (readonly) struct CGPoint { double x; double y; } rightEyePosition;
@property (readonly) BOOL hasMouthPosition;
@property (readonly) struct CGPoint { double x; double y; } mouthPosition;
@property (readonly) BOOL hasTrackingID;
@property (readonly) int trackingID;
@property (readonly) BOOL hasTrackingFrameCount;
@property (readonly) int trackingFrameCount;
@property (readonly) BOOL hasFaceAngle;
@property (readonly) float faceAngle;
@property (readonly) BOOL hasSmile;
@property (readonly) BOOL leftEyeClosed;
@property (readonly) BOOL rightEyeClosed;

- (void)dealloc;
- (id)debugDescription;
- (id)type;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasLeftEyePosition:(BOOL)a1 leftEyePosition:(struct CGPoint { double x0; double x1; })a2 hasRightEyePosition:(BOOL)a3 rightEyePosition:(struct CGPoint { double x0; double x1; })a4 hasMouthPosition:(BOOL)a5 mouthPosition:(struct CGPoint { double x0; double x1; })a6 hasFaceAngle:(BOOL)a7 faceAngle:(float)a8 hasTrackingID:(BOOL)a9 trackingID:(int)a10 hasTrackingFrameCount:(BOOL)a11 trackingFrameCount:(int)a12 hasSmile:(BOOL)a13 leftEyeClosed:(BOOL)a14 rightEyeClosed:(BOOL)a15 landmarks:(id)a16;

@end
