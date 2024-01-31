@class NSUUID, HMITorsoprint, NSMutableIndexSet, HMIFaceprint;

@interface HMIPersonBlob : HMFObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeStamp;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) HMIFaceprint *faceprint;
@property (readonly) HMITorsoprint *torsoprint;
@property (retain) NSMutableIndexSet *personIndices;
@property (retain) NSUUID *blobID;

- (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithNewPersonEvent:(id)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isExpiredAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)similarityToPersonBlob:(id)a0;
- (void)trackPersonBlob:(id)a0;

@end
