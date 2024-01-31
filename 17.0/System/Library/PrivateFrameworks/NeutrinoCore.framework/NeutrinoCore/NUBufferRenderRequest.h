@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest

@property id<NUMutableBufferImage> targetBufferImage;

- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)newRenderJob;

@end
