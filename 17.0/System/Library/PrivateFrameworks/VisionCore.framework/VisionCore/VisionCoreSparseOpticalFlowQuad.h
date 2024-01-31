@class NSString, NSUUID;

@interface VisionCoreSparseOpticalFlowQuad : NSObject <VisionCoreSparseOpticalFlowQuadrilateral>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) int homographyGroupID;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *UUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)getEmptyDistanceBetweenCenters:(id)a0;
- (struct vector<__fp16, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *x0; void /* unknown type, blank encoding */ *x1; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void /* unknown type, blank encoding */ *x0; } x2; })generateGridKeypointsWithMaxKeypoints:(float)a0 minGridFrequency:(int)a1;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3 indentifier:(id)a4;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3 indentifier:(id)a4 homographyGroupID:(int)a5;

@end
