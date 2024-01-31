@class NSURLSession, NSString, NSOperationQueue, HMIHomeKitClient;

@interface HMIFeedbackSession : HMFObject <HMFLogging, NSURLSessionDelegate>

@property (readonly) HMIHomeKitClient *homeKitClient;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) NSURLSession *session;
@property (readonly) NSString *feedbackServiceHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
