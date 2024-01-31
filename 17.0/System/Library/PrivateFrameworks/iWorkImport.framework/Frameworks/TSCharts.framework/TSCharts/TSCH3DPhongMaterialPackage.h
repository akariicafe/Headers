@class TSCH3DEmissiveMaterial, TSCH3DModulateMaterial, TSCH3DDiffuseMaterial, TSCH3DSpecularMaterial, TSCH3DShininessMaterial;

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage

@property (retain, nonatomic) TSCH3DEmissiveMaterial *emissive;
@property (retain, nonatomic) TSCH3DDiffuseMaterial *diffuse;
@property (retain, nonatomic) TSCH3DModulateMaterial *modulate;
@property (retain, nonatomic) TSCH3DSpecularMaterial *specular;
@property (retain, nonatomic) TSCH3DShininessMaterial *shininess;

+ (id)package;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)materialEnumerator;

@end
