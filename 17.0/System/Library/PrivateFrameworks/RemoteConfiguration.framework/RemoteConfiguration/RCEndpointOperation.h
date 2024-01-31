@class NSDictionary, NSURL, RCConfigurationSettings, NSObject;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation : RCOperation

@property (retain, nonatomic) NSDictionary *configurationResourcesByRequestKey;
@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) NSDictionary *changeTagsByRequestKey;
@property (retain, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (unsigned long long)maxRetries;
- (id)requestDataForSettings:(id)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (void)_fetchConfigurationWithSettings:(id)a0;
- (void)resetForRetry;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;

@end
