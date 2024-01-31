@class NSString, NSObject, CIContext;
@protocol OS_dispatch_queue;

@interface NURenderer : NSObject <NURenderer> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) CIContext *context;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGColorSpace { } *)workingColorSpace;
+ (int)workingFormat;
+ (id)_renderContextOptionsWithOptions:(id)a0 nameSuffix:(id)a1;
+ (BOOL)allowClampToAlpha;
+ (id)defaultRenderContextOptions;
+ (BOOL)defaultUseHalfFloat;
+ (id)rendererWithMetalDevice:(id)a0 options:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)renderImage:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toDestination:(id)a2 atPoint:(struct { long long x0; long long x1; })a3 error:(out id *)a4;
- (id)imageForSurface:(id)a0 options:(id)a1;
- (id)initWithCIContext:(id)a0 priority:(long long)a1;
- (id)renderDestinationForSurface:(id)a0;

@end
