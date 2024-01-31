@interface VNHumanHandPoseDetector : VNHumanPoseDetector

+ (Class)recognizedPointsObservationClass;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)a0 error:(id *)a1;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)a0 error:(id *)a1;

@end
