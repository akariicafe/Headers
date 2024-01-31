@interface ARNormalTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_normalPixelBufferPool;
    struct CV3DNormalEstimationSession { } *_session;
}

- (id)init;
- (void)dealloc;
- (id)processData:(id)a0;

@end
