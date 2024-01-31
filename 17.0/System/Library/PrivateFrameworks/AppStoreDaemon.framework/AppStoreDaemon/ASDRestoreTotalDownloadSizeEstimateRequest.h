@class ASDRestoreService;

@interface ASDRestoreTotalDownloadSizeEstimateRequest : NSObject {
    ASDRestoreService *_restoreService;
}

- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
