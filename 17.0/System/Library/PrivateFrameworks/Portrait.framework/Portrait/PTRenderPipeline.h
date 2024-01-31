@class PTMetalContext, PTRenderPipelineDescriptor, NSString;

@interface PTRenderPipeline : NSObject {
    PTRenderPipelineDescriptor *_descriptor;
    PTMetalContext *_metalContext;
    unsigned long long _activeVersion;
    NSString *_description;
}

@property (readonly) unsigned long long activeVersion;

+ (BOOL)isRenderVersionSupported:(unsigned long long)a0;
+ (unsigned long long)latestVersion;
+ (int)prewarmForMediaserverd;
+ (BOOL)isMetalDeviceSupported:(id)a0;
+ (id)debugRenderOptions;
+ (int)prewarmWithDescriptor:(id)a0;

- (void)prewarm;
- (id)initWithDescriptor:(id)a0;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (id)description;
- (id)createRenderStateWithQuality:(int)a0;
- (void)setActiveVersion:(unsigned long long)a0;
- (void).cxx_destruct;

@end
