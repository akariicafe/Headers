@class NSString, NURegion, NSObject;
@protocol NUMutableBufferImage, OS_dispatch_queue;

@interface PIRetouchCacheNode : NUCacheNode {
    unsigned long long _baseStrokeIndex;
    NSString *_baseIdentifier;
    NSString *_outputKey;
    id<NUMutableBufferImage> _inputImage;
    NURegion *_inputRegion;
    NURegion *_outputRegion;
    NSObject<OS_dispatch_queue> *_retouchQueue;
}

@property (readonly, nonatomic) long long padding;

+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)persistentURL;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (void)_resolveSourceWithResponse:(id)a0;
- (BOOL)_setupRenderRequest:(id)a0 error:(out id *)a1;
- (BOOL)_tryLoad:(out id *)a0;
- (void)_updateDigest:(id)a0 forStroke:(id)a1;
- (void)_updateInputRegion:(id)a0 outputRegion:(id)a1 forStroke:(id)a2 geometry:(id)a3;
- (id)descriptionSubClassHook;
- (id)initWithInput:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)outputRegion;
- (void)resolveWithInputImage:(id)a0 retouchStrokes:(id)a1 cacheKey:(id)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)retouchInputNode;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;

@end
