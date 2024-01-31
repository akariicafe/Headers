@interface _SerializableCVPixelBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { } *)a0;

@end
