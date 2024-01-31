@class TSCH3DSceneObject;

@interface TSCH3DPickedPoint : NSObject <NSCopying>

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } element;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } objectSpacePoint;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } centerProjectionPoint;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } projection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } transform;
@property (readonly, retain, nonatomic) TSCH3DSceneObject *sceneObject;
@property (readonly, nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } cameraSpacePoint;

+ (id)pickedPointWithSceneObject:(id)a0 element:(void *)a1 projection:(void *)a2 transform:(void *)a3 objectSpacePoint:(void *)a4 centerProjectionPoint:(void *)a5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSceneObject:(id)a0 element:(void *)a1 projection:(void *)a2 transform:(void *)a3 objectSpacePoint:(void *)a4 centerProjectionPoint:(void *)a5;

@end
