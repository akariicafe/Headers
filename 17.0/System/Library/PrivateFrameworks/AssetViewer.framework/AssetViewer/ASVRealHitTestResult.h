@class NSUUID;

@interface ASVRealHitTestResult : ASVHitTestResult

@property (readonly, nonatomic) NSUUID *planeIdentifier;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldTransform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ localPosition;
@property (readonly, nonatomic) float distanceFromFeaturePoint;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 worldPosition:(SEL)a1 worldTransform:(long long)a2 localPosition:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 imagePoint:(id)a4 assetPosition:(long long)a5 cameraPosition:(void /* unknown type, empty encoding */)a6 planeIdentifier:(void /* unknown type, empty encoding */)a7 planeAlignment:(void /* unknown type, empty encoding */)a8;
- (id)initWithHitTestResult:(id)a0 imagePoint:(SEL)a1 assetPosition:(id)a2 cameraPosition:(void /* unknown type, empty encoding */)a3;
- (id)initWithRaycastResult:(id)a0 imagePoint:(SEL)a1 assetPosition:(id)a2 cameraPosition:(void /* unknown type, empty encoding */)a3;

@end
