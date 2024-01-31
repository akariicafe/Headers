@class NSString;

@interface MADServiceVideoProcessingSubtask : VCPMABaseTask <MADServiceVideoProcessingSubtaskProtocol>

@property (copy, nonatomic) NSString *signpostPayload;

+ (Class)taskClassForRequest:(id)a0;
+ (id)taskWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
+ (void)unimplementedExceptionForMethodName:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;

@end
