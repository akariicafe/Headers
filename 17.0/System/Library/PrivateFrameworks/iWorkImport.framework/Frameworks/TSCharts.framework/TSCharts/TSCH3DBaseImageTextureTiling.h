@class TSCH3DVector;

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {
    TSCH3DVector *_scale;
}

@property (nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } scale;
@property (nonatomic) float rotation;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)restoreDefault;

@end
