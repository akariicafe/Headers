@interface AXMPixelBufferWrapper : NSObject {
    struct __CVBuffer { } *_pixelBuffer;
    unsigned int _orientation;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } unorientedSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientedSize;

+ (id)new;
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

- (id)init;
- (void)dealloc;
- (id)_initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

@end
