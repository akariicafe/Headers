@class NSString, NSMutableSet, HMIFaceRecognition, HMIDESMutableFloatArray, NSMutableArray;

@interface HMIMutableCluster : HMFObject <HMFLogging>

@property (retain, nonatomic) NSMutableArray *faceprintUUIDs;
@property (retain, nonatomic) NSMutableArray *torsoprintUUIDs;
@property (retain, nonatomic) NSMutableSet *linkedEntityUUIDs;
@property (retain) NSMutableArray *torsoprints;
@property (readonly) HMIDESMutableFloatArray *faceCentroid;
@property (readonly) HMIDESMutableFloatArray *torsoCentroid;
@property (readonly) unsigned long long faceCount;
@property (readonly) unsigned long long torsoCount;
@property (retain) HMIFaceRecognition *faceRecognition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFaceprint:(id)a0;
- (void)addTorsoprints:(id)a0;
- (void)addFaceprints:(id)a0;
- (void)addLinkedEntityUUIDs:(id)a0;
- (void)flushTorsoprints;
- (id)initWithTorsoprint:(id)a0;

@end
