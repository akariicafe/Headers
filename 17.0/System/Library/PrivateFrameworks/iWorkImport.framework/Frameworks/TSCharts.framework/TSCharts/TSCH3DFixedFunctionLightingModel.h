@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel

+ (Class)effectClass;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (Class)materialEffectClass;

- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
