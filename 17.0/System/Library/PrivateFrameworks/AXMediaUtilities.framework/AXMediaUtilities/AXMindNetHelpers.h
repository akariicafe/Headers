@interface AXMindNetHelpers : NSObject

+ (id)resizeImage:(id)a0 to:(struct CGSize { double x0; double x1; })a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)createVImageBuffer:(id)a0;
+ (struct shared_ptr<CGImage> { struct CGImage *x0; struct __shared_weak_count *x1; })getCGImageFromCIImage:(id)a0;
+ (id)resizeImage:(id)a0 byX:(float)a1 andY:(float)a2;
+ (id)resizeImage:(id)a0 toWidth:(unsigned long long)a1 andHeight:(unsigned long long)a2;
+ (id)setCIContext;
+ (id)setCIContext:(id)a0;

@end
