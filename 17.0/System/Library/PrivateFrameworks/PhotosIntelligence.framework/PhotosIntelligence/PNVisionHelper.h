@interface PNVisionHelper : NSObject

+ (id)faceprintFromFaceprintArchive:(id)a0 error:(id *)a1;

- (float)distanceBetweenFaceObservation:(id)a0 andFaceObservation:(id)a1 error:(id *)a2;
- (id)faceObservationFromFace:(id)a0;
- (id)representativenessFromFaceObservations:(id)a0 error:(id *)a1;

@end
