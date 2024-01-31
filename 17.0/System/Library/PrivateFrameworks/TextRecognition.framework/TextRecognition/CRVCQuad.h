@class NSUUID, NSString;

@interface CRVCQuad : NSObject <VisionCoreSparseOpticalFlowQuadrilateral>

@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) int homographyGroupID;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithQuad:(id)a0;
- (id)initWithImageSpaceQuad:(id)a0 uuid:(id)a1;
- (id)initWithImageSpaceQuad:(id)a0 uuid:(id)a1 homographyGroupID:(int)a2;
- (id)quadAfterScaling:(float)a0;

@end
