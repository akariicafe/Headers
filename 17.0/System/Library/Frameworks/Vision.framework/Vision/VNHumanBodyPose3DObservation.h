@class NSArray;

@interface VNHumanBodyPose3DObservation : VNRecognizedPoints3DObservation

@property (readonly) long long heightEstimation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraOriginMatrix;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, nonatomic) float bodyHeight;

- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)pointInImageForJointName:(id)a0 error:(id *)a1;
- (BOOL)getCameraRelativePosition:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 forJointName:(id)a1 error:(id *)a2;
- (id)parentJointNameForJointName:(id)a0;
- (id)recognizedPointForJointName:(id)a0 error:(id *)a1;
- (id)recognizedPointsForJointsGroupName:(id)a0 error:(id *)a1;

@end
