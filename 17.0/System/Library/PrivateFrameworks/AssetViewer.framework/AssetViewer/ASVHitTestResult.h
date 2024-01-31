@interface ASVHitTestResult : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ worldPosition;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ assetPosition;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ cameraPosition;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ imagePoint;
@property (readonly, nonatomic) float distanceFromAsset;
@property (readonly, nonatomic) float distanceFromCamera;
@property (readonly, nonatomic) BOOL isRealPlane;
@property (nonatomic) void /* unknown type, empty encoding */ synthesizedPlaneNormal;
@property (readonly, nonatomic) BOOL isSynthesizedVeritcalPlane;

- (void /* unknown type, empty encoding */)cameraToPosition;
- (id)initWithType:(id)a0 worldPosition:(SEL)a1 imagePoint:(long long)a2 assetPosition:(void /* unknown type, empty encoding */)a3 cameraPosition:(void /* unknown type, empty encoding */)a4;

@end
