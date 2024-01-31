@class NSDictionary, NSArray, VGCapturedPose;

@interface VGFaceSelectionState : VGSelectionState

@property (nonatomic) float yawAngle;
@property (nonatomic) float pitchAngle;
@property (retain, nonatomic) NSDictionary *yawAngleCapturedPoses;
@property (retain, nonatomic) NSDictionary *pitchAngleCapturedPoses;
@property (retain, nonatomic) NSDictionary *posesForHairCapturedPoses;
@property (retain, nonatomic) NSDictionary *expressionCapturedPoses;
@property (readonly, nonatomic) NSDictionary *yawAngleCaptured;
@property (readonly, nonatomic) NSDictionary *pitchAngleCaptured;
@property (readonly, nonatomic) NSDictionary *posesForHairCaptured;
@property (readonly, nonatomic) NSDictionary *expressionCaptured;
@property (retain, nonatomic) NSArray *tronPoses;
@property (retain, nonatomic) NSArray *hairPoses;
@property (retain, nonatomic) VGCapturedPose *capturedFrontPose;
@property (nonatomic) float completionScore;

- (id)description;
- (void).cxx_destruct;

@end
