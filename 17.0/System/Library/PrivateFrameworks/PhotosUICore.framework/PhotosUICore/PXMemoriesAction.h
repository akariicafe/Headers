@protocol PXFastEnumeration;

@interface PXMemoriesAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

- (id)collections;
- (void).cxx_destruct;
- (id)initWithMemories:(id)a0;
- (void)performMemoryChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
