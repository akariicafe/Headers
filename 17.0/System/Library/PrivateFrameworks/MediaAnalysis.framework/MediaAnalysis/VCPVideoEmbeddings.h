@class NSMutableArray;

@interface VCPVideoEmbeddings : NSObject {
    unsigned long long _embeddingSize;
    NSMutableArray *_videoEmbeddings;
    float *_averageEmbedding;
    float *_currentEmbedding;
}

@property (readonly) long long embeddingMode;

- (void)dealloc;
- (void).cxx_destruct;
- (int)addEmbeddings:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)getEmbeddingsForRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithEmbeddingMode:(long long)a0;

@end
