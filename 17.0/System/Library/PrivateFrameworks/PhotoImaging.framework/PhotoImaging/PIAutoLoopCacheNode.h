@interface PIAutoLoopCacheNode : NUVideoCacheNode

+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

- (id)persistentURL;
- (id)outputSettings:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;

@end
