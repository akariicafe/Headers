@class MTMediaItemMetadataLoader;

@interface PFMediaItemMetadataLoader : NSObject {
    MTMediaItemMetadataLoader *_loader;
}

- (id)init;
- (void).cxx_destruct;
- (void)keyIdentifiersFromAsset:(id)a0 completion:(id /* block */)a1;

@end
