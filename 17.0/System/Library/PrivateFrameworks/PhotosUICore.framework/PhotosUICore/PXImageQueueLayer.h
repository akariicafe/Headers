@interface PXImageQueueLayer : CALayer {
    struct _CAImageQueue { } *_imageQueue;
    struct __CVBuffer { } *_pixelBuffer;
    unsigned long long _pixelBufferId;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)init;
- (void)dealloc;
- (id)initWithLayer:(id)a0;
- (void)_commonInit;

@end
