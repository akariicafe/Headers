@class NSURLSession, NSString, NSOperationQueue, NSURLCache;

@interface ResourceLoader : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSURLCache *urlCache;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_localDateFormatter;
+ (id)_rfc1123DateFormatter;

- (double)_simulatedLatency;
- (id)init;
- (void).cxx_destruct;
- (void)flushCache;
- (void)asynchronousDataFromURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)refreshCacheForRequest:(id)a0 usingCachedResponse:(id)a1 completionBlock:(id /* block */)a2;

@end
