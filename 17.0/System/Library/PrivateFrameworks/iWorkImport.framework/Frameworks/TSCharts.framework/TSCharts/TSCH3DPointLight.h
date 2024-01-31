@class TSCH3DVector;

@interface TSCH3DPointLight : TSCH3DLight <TSCH3DLightPositionable> {
    TSCH3DVector *_position;
}

@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } position;

+ (Class)effectClass;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
