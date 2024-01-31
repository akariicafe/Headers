@interface TSCH3DNullFramebuffer : TSCH3DFramebuffer

- (void)setClearDepth:(float)a0;
- (void)setClearColor:(const void *)a0;
- (void)clear:(int)a0;
- (void)clean;
- (BOOL)activateInsideSession:(id)a0;
- (void)bindColorbufferInSession:(id)a0;
- (BOOL)bindInSession:(id)a0;
- (void)destroyResourcesInSession:(id)a0;
- (void)disableSamplingInSession:(id)a0;
- (void)discardBuffers;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (unsigned long long)estimatedMemoryInBytes;
- (BOOL)getBytes:(void *)a0 viewport:(void *)a1 components:(unsigned long long)a2 forProcessor:(id)a3 session:(id)a4;
- (BOOL)isProtectedInSession:(id)a0;
- (id)newMetalTextureWithDevice:(id)a0 forSession:(id)a1 returningIsFlipped:(BOOL *)a2;
- (void)protectInSession:(id)a0 unprotectOnFail:(BOOL)a1;
- (void)resetClearBufferTypes;
- (id)resolvingFramebuffer;
- (void)unprotectInSession:(id)a0 clearOnFailProtection:(BOOL)a1;
- (BOOL)validForSession:(id)a0;
- (void)wipe:(const void *)a0;

@end
