@interface NULivePhotoRenderClient : NURenderClient

- (void)submitRequest:(id)a0;
- (void)setCompletionBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 responseQueue:(id)a1;
- (void)submitGenericRequest:(id)a0 completion:(id /* block */)a1;

@end
