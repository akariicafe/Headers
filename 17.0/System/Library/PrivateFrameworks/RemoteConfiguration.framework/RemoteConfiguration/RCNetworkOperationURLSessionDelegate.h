@class RCUnfairLock, NSString, NSMutableDictionary, NSPointerArray;

@interface RCNetworkOperationURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) RCUnfairLock *taskLock;
@property (retain, nonatomic) NSMutableDictionary *runningTasks;
@property (retain, nonatomic) RCUnfairLock *observerLock;
@property (retain, nonatomic) NSPointerArray *sessionDidFinishObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithSessionIdentifier:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)addObserver:(id)a0;
- (id)_existingNetworkTaskForURLSessionTask:(id)a0;
- (id)_networkTaskForIdentifier:(id)a0;
- (void)observeCompletionOfTaskWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
