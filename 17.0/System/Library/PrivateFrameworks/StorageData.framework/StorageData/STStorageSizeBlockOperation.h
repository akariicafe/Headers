@class STStorageApp;

@interface STStorageSizeBlockOperation : STStorageSizeOperation

@property (retain) STStorageApp *app;
@property (copy) id /* block */ sizeBlock;

+ (id)operationWithSizeBlock:(id /* block */)a0;

- (void)main;
- (void).cxx_destruct;

@end
