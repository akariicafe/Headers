@interface BufferWithTimestamp : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)initWithBuffer:(struct __CVBuffer { } *)a0 timstamp:(double)a1;

@end
