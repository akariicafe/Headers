@interface ANSTAlgorithm : NSObject

@property (readonly, nonatomic) unsigned long long version;

+ (id)new;
+ (unsigned long long)_version;
+ (Class)_concreteClassOfVersion:(unsigned long long)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (BOOL)prepareWithError:(id *)a0;
- (struct __CVBuffer { } *)createPixelBuffer:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (struct __CVPixelBufferPool { } *)pixelBufferPoolCreateWithMinCapacity:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(unsigned int)a3;

@end
