@class NSString, TSCH3DVector;

@interface TSCH3DLight : NSObject <NSCopying> {
    TSCH3DVector *_ambientColor;
    TSCH3DVector *_diffuseColor;
    TSCH3DVector *_specularColor;
    TSCH3DVector *_attenuation;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } ambientColor;
@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } diffuseColor;
@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } specularColor;
@property (nonatomic) float intensity;
@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } attenuation;
@property (nonatomic) int coordinateSpace;
@property (nonatomic) BOOL enabled;

+ (id)light;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)lightClasses;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)affect:(id)a0 states:(id)a1 texturePool:(id)a2;
- (id)initWithLightArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToLightArchive:(void *)a0 archiver:(id)a1;

@end
