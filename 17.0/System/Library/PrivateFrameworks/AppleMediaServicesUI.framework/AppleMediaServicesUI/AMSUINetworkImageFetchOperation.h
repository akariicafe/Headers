@class NSURL, NSURLSessionTask, NSURLSession;

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLSession *URLSession;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)setQueuePriority:(long long)a0;
- (void)cancel;
- (void)_didCompleteTaskWithData:(id)a0 error:(id)a1;
- (id)_eagerlyDecompressImage:(id)a0;
- (float)_sessionTaskPriorityForQueuePriority:(long long)a0;
- (id)initWithURL:(id)a0 URLSession:(id)a1;

@end
