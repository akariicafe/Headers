@interface TSCH3DTextureMipmapper : NSObject

+ (id)mipmapsWithBuffer:(id)a0 skipFirstLevel:(BOOL)a1;
+ (BOOL)p_generateMipmapsBuffer:(id)a0 level0Buffer:(id)a1 skipFirstLevel:(BOOL)a2;
+ (struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; })p_mapDimensionWithBuffer:(id)a0 skipFirstLevel:(BOOL)a1;

@end
