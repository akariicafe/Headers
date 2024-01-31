@class NSUUID, NSString;

@interface VisionCoreWarpTransform : NSObject <VisionCoreUUIDProviding>

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } warpTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform;
@property (readonly, nonatomic) float reprojectionError;
@property (readonly, nonatomic) int groupID;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 affineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 UUID:(id)a2 reprojectionError:(float)a3;
- (id)initWithWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 affineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 UUID:(id)a2 reprojectionError:(float)a3 groupID:(int)a4;

@end
