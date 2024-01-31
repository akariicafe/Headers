@class NFMutexLock, FCAsyncSerialQueue, NSURLSession, NSOperationQueue, FCBalancedCounter, FCDateRange, NSString;
@protocol NDAnalyticsUploadSchedulerDelegate, FCOperationThrottler;

@interface NDAnalyticsUploadScheduler : NSObject <FCOperationThrottlerDelegate, NSURLSessionTaskDelegate>

@property (retain, nonatomic) NFMutexLock *lock;
@property (copy, nonatomic) FCDateRange *deliveryWindow;
@property (retain, nonatomic) id<FCOperationThrottler> schedulingAndForegroundUploadThrottler;
@property (retain, nonatomic) FCAsyncSerialQueue *uploadQueue;
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue;
@property (retain, nonatomic) NSURLSession *backgroundSession;
@property (retain, nonatomic) FCBalancedCounter *backgroundSessionLaunchEventCounter;
@property (weak, nonatomic) id<NDAnalyticsUploadSchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 willBeginDelayedRequest:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_uploadWithCompletion:(id /* block */)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_scheduleBackgroundUploadInWindow:(id)a0;
- (void).cxx_destruct;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)scheduleUploadInWindow:(id)a0 withForegroundUploadCompletion:(id /* block */)a1;
- (id)initWithURLSessionQueue:(id)a0;

@end
