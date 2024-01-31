@class NSString, NSMutableDictionary, HMIPersonTracker;

@interface HMISessionEntityManager : HMFObject <HMFLogging> {
    NSMutableDictionary *_sessionUUIDToPreviousFaceprints;
    NSMutableDictionary *_sessionUUIDToPreviousTorsoprints;
    HMIPersonTracker *_personTracker;
}

@property (readonly) NSMutableDictionary *sessionEntities;
@property (readonly) double faceVIPThresholdForTorsoAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)updatePersonEventWithPersonEvent:(id)a0 sessionEntityUUID:(id)a1 predictedLinkedEntityUUIDs:(id)a2 sessionEntityAssignment:(long long)a3;

- (id)init;
- (void).cxx_destruct;
- (id)assignSessionEntitiesToPersonEvents:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 homeUUID:(id)a3;
- (id)assignSessionEntityToFaceRecognition:(id)a0 torsoRecognition:(id)a1 predictedLinkedEntityUUIDs:(id)a2 availableSessionEntityUUIDs:(id)a3 sessionEntityAssignment:(long long *)a4;
- (id)clusterSessionEntityToFaceRecognition:(id)a0 torsoRecognition:(id)a1 predictedLinkedEntityUUIDs:(id)a2 availableSessionEntityUUIDs:(id)a3 sessionEntityAssignment:(long long *)a4;
- (void)createSessionEntityWithUUID:(id)a0 faceRecognition:(id)a1 torsoRecognition:(id)a2 predictedLinkedEntityUUIDs:(id)a3 sessionEntityAssignment:(long long *)a4;
- (void)submitTorsoprintsToModelManagerForHome:(id)a0 withTorsoAnnotations:(id)a1;
- (void)updatePreviousPrintsForSessionEntityUUID:(id)a0 faceRecognition:(id)a1 torsoRecognition:(id)a2;
- (id)updateTorsoModelAndGetTorsoAnnotationsForHome:(id)a0;

@end
