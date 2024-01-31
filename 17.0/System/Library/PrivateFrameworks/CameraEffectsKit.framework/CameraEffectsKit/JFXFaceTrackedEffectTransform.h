@class NSDictionary;

@interface JFXFaceTrackedEffectTransform : NSObject <NSCopying>

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraProjection;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } billboardTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } onFaceTransform;
@property (readonly, nonatomic) NSDictionary *effectParametersForOnFaceTracking;
@property (readonly, nonatomic) NSDictionary *effectParametersForOnBillboardTracking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectParametersForTrackingType:(long long)a0;
- (id)initWithCameraProjection:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 cameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 onFaceTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 billboardTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (BOOL)isEqual:(id)a0 forTrackingType:(long long)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformForTrackingType:(long long)a0;

@end
