@class NSMutableDictionary;

@interface MLPixelBufferPool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

@property (readonly, nonatomic) NSMutableDictionary *pixelBufferPoolCache;

- (id)init;
- (void).cxx_destruct;
- (struct __CVPixelBufferPool { } *)_pixelBufferPoolWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormatType:(unsigned int)a1 error:(id *)a2;
- (struct __CVBuffer { } *)createPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormatType:(unsigned int)a1 error:(id *)a2;

@end
