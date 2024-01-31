@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EspressoWrapper : NSObject {
    void *_ctx;
    void *_plan;
    int _planIdx;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _built;
}

@property (readonly) NSString *path;

+ (id)cache;
+ (void)clearCache;
+ (id)cachedEspressoWrapper:(id)a0;
+ (id)pathFromBaseName:(id)a0;

- (void *)plan;
- (void)setPlan:(void *)a0;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)setCtx:(void *)a0;
- (void *)ctx;
- (int)execute;
- (void).cxx_destruct;
- (id)CIImageProcessorDigestObject;
- (int)executeAsync;
- (int)planIdx;
- (int)bind:(const char *)a0 buffer:(struct __CVBuffer { } *)a1;
- (void)buildAsync;
- (BOOL)buildWait;
- (BOOL)built;
- (BOOL)hasBlob:(const char *)a0;
- (void)setBuilt:(BOOL)a0;
- (void)setPlanIdx:(int)a0;

@end
