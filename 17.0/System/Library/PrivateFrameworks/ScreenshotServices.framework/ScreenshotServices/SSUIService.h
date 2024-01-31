@class SSUIServiceClient;

@interface SSUIService : NSObject {
    SSUIServiceClient *_client;
}

- (id)init;
- (void).cxx_destruct;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1;
- (void)_runPPTNamed:(id)a0 numberOfRequiredScreenshots:(unsigned long long)a1;
- (void)showScreenshotUI;
- (void)showScreenshotUIForImage:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)takeScreenshotWithOptions:(id)a0;

@end
