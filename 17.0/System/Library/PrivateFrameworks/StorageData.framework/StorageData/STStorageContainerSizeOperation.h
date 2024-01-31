@protocol STContainer;

@interface STStorageContainerSizeOperation : STStorageSizeOperation

@property (retain) id<STContainer> container;

+ (id)operationForContainer:(id)a0;

- (void)main;
- (void).cxx_destruct;

@end
