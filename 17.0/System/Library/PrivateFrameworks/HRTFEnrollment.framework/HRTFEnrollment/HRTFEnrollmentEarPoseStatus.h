@class HRTFEnrollmentPoseStatus;

@interface HRTFEnrollmentEarPoseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HRTFEnrollmentPoseStatus *leftStatus;
@property (readonly) HRTFEnrollmentPoseStatus *rightStatus;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } earBoundingBox;
@property (readonly) int earCaptureStatus;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLeftYawAngleArray:(double *)a0 leftTracking:(unsigned char)a1 leftYawCapturedArray:(char *)a2 rightYawAngleArray:(double *)a3 rightTracking:(unsigned char)a4 rightYawCapturedArray:(char *)a5 yawCount:(unsigned long long)a6 yawAngle:(double)a7 pitchAngle:(double)a8 leftPitchAngleArray:(double *)a9 leftPitchCapturedArray:(char *)a10 rightPitchAngleArray:(double *)a11 rightPitchCapturedArray:(char *)a12 pitchCount:(unsigned long long)a13 earBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a14 earCaptureStatus:(int)a15;

@end
