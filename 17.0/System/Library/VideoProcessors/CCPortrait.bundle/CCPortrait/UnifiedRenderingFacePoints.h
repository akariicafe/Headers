@interface UnifiedRenderingFacePoints : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } centerPos;
@property (nonatomic) struct CGPoint { double x; double y; } leftEyeCenterPos;
@property (nonatomic) struct CGPoint { double x; double y; } rightEyeCenterPos;
@property (nonatomic) struct CGPoint { double x; double y; } chinCenterPos;

+ (id)validKeys;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)initWithCenterPos:(struct CGPoint { double x0; double x1; })a0 leftEyeCenterPos:(struct CGPoint { double x0; double x1; })a1 rightEyeCenterPos:(struct CGPoint { double x0; double x1; })a2 chinCenterPos:(struct CGPoint { double x0; double x1; })a3;

@end
