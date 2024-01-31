@interface PXPixelBufferView : UIView

+ (Class)layerClass;

- (void)didMoveToWindow;
- (id)imageQueueLayer;
- (void)enqueuePixelBuffer:(struct __CVBuffer { } *)a0;

@end
