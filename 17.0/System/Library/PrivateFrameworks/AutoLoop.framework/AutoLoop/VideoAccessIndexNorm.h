@interface VideoAccessIndexNorm : VideoAccessIndex {
    void *mNormalizer;
}

- (int)getFrameAtIndex:(unsigned int)a0 pixBuf:(struct __CVBuffer **)a1;
- (id)initFromFile:(id)a0 pixelFormat:(unsigned int)a1 normalizer:(void *)a2;

@end
