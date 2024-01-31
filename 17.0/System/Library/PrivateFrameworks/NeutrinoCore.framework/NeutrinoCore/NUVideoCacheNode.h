@interface NUVideoCacheNode : NUCacheNode

- (id)persistentURL;
- (id)outputSettings:(out id *)a0;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;

@end
