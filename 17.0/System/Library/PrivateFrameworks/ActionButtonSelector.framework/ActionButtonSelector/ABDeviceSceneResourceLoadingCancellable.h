@interface ABDeviceSceneResourceLoadingCancellable : NSObject {
    id /* block */ _cancelBlock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCancelBlock:(id /* block */)a0;

@end
