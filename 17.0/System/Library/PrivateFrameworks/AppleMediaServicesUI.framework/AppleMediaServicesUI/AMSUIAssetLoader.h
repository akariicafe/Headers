@interface AMSUIAssetLoader : NSObject {
    void /* unknown type, empty encoding */ urlSession;
}

@property (class, nonatomic, readonly) AMSUIAssetLoader *sharedLoader;

- (id)init;
- (void).cxx_destruct;
- (id)fetchWithAssetURL:(id)a0;

@end
