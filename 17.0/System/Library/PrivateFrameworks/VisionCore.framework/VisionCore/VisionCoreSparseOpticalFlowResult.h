@class NSUUID, NSArray;

@interface VisionCoreSparseOpticalFlowResult : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSArray *srcPts;
@property (readonly, copy, nonatomic) NSArray *dstPts;

- (void).cxx_destruct;
- (id)initWithQuadUUID:(id)a0 srcKeypoints:(id)a1 dstKeypoints:(id)a2;

@end
