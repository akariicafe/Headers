@interface ABPKImageData : NSObject

@property (nonatomic, retain) void /* unknown type, empty encoding */ pixelBuffer;
@property (nonatomic) void /* unknown type, empty encoding */ timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end
