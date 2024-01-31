@class NSString, NSMutableDictionary, NSObject;
@protocol MTLDevice, NURenderer, OS_dispatch_queue, MTLCommandQueue;

@interface NUDevice : NSObject <NUDevice> {
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLCommandQueue> _commandQueue;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly, nonatomic) id<NURenderer> renderer;
@property (readonly, nonatomic) id<NURenderer> lowPriorityRenderer;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (readonly, nonatomic) BOOL shouldRenderUsingMetal;
@property (readonly, nonatomic) NSMutableDictionary *renderers;
@property (readonly, nonatomic) unsigned long long family;
@property (readonly, nonatomic) long long defaultSampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ciContextOptionsForRendererOptions:(unsigned long long)a0;

- (void)clearCaches;
- (id)init;
- (long long)_preferredSampleMode;
- (void).cxx_destruct;
- (id)_newRendererWithCIContextOptions:(id)a0 error:(out id *)a1;
- (id)_metalCommandQueue;
- (id)renderer:(out id *)a0;
- (id)initWithName:(id)a0 model:(id)a1 metalDevice:(id)a2;
- (long long)_defaultSampleMode;
- (id)_newRendererWithOptions:(unsigned long long)a0 error:(out id *)a1;
- (id)_rendererWithOptions:(unsigned long long)a0 error:(out id *)a1;
- (void)clearRenderers;
- (void)executeMetal:(id /* block */)a0;
- (id)highPriorityLowMemoryRendererWithoutIntermediateCaching:(out id *)a0;
- (id)lowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id *)a0;
- (id)lowPriorityRenderer:(out id *)a0;
- (id)lowPriorityRendererWithoutIntermediateCaching:(out id *)a0;
- (id)rendererWithOptions:(unsigned long long)a0 error:(out id *)a1;
- (id)rendererWithoutIntermediateCaching:(out id *)a0;
- (BOOL)shouldLogRendererUsed;
- (BOOL)supportsPixelFormat:(id)a0;

@end
