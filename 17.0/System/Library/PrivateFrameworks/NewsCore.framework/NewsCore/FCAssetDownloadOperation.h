@class FCNetworkBehaviorMonitor, NSString, NSDictionary, NSURL, NSData, FCURLRequestScheduler, FCNetworkEvent;

@interface FCAssetDownloadOperation : FCNetworkOperation

@property (retain, nonatomic) FCURLRequestScheduler *scheduler;
@property (retain, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSData *downloadedData;
@property (retain, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) FCNetworkEvent *networkEvent;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *loggingKey;
@property (nonatomic) long long downloadDestination;
@property (nonatomic) int networkEventType;
@property (nonatomic) unsigned long long cachePolicy;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (copy, nonatomic) id /* block */ fileDownloadCompletionHandler;
@property (copy, nonatomic) id /* block */ dataDownloadCompletionHandler;

+ (id)sharedURLSession;
+ (id)sharedURLRequestScheduler;

- (unsigned long long)maxRetries;
- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithURLRequestScheduler:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)prepareOperation;
- (id)throttleGroup;

@end
