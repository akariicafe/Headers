@interface ANSTISPAlgorithm : ANSTAlgorithm

@property (readonly, nonatomic) unsigned long long networkInputBufferWidth;
@property (readonly, nonatomic) unsigned long long networkInputBufferHeight;
@property (readonly, nonatomic) unsigned int networkInputBufferPixelFormat;

+ (id)new;
+ (Class)_concreteClassOfVersion:(unsigned long long)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 error:(id *)a2;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
