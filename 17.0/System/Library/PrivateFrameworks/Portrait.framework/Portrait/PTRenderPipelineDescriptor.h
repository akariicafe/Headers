@class NSDictionary;
@protocol MTLDevice;

@interface PTRenderPipelineDescriptor : NSObject

@property (readonly, retain) id<MTLDevice> device;
@property (readonly) unsigned long long version;
@property (readonly) struct CGSize { double width; double height; } colorInputSize;
@property (readonly) struct CGSize { double width; double height; } colorOutputSize;
@property (readonly) struct CGSize { double width; double height; } disparitySize;
@property long long debugRendering;
@property BOOL verbose;
@property BOOL gpuProfiling;
@property BOOL useRGBA;
@property (retain, nonatomic) NSDictionary *options;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;

- (id)initWithDevice:(id)a0 version:(unsigned long long)a1 colorSize:(struct CGSize { double x0; double x1; })a2 disparitySize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithDevice:(id)a0 version:(unsigned long long)a1 colorInputSize:(struct CGSize { double x0; double x1; })a2 colorOutputSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4;
- (id)copy;
- (void).cxx_destruct;

@end
