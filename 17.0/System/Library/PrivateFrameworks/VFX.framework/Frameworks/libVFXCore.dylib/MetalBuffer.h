@protocol MTLBuffer;

@interface MetalBuffer : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) double lastReuseTime;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0;

@end
