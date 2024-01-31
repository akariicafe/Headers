@class NSString, NSArray, MADServiceVideoAsset;

@interface MADServiceVideoProcessingTask : VCPMABaseTask {
    NSArray *_requests;
    MADServiceVideoAsset *_asset;
    id /* block */ _progressHandler;
    id /* block */ _resultHandler;
    id /* block */ _completionHandler;
}

@property (copy, nonatomic) NSString *signpostPayload;

+ (id)taskWithRequests:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4 andCompletionHandler:(id /* block */)a5;

- (BOOL)run:(id *)a0;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)initWithRequests:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4 andCompletionHandler:(id /* block */)a5;

@end
