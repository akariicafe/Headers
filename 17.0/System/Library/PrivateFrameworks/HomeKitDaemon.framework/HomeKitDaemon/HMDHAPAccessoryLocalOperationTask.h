@class NSString, NSDictionary;

@interface HMDHAPAccessoryLocalOperationTask : HMDHAPAccessoryTask

@property (readonly) NSString *activityRequestEventName;
@property (readonly) NSString *activityResponseEventName;
@property (retain) NSDictionary *logEvents;

- (void)execute;
- (void).cxx_destruct;
- (id /* block */)_completionHandlerForAccessory:(id)a0 accessoryRequests:(id)a1 responseWaitGroup:(id)a2;
- (void)_dispatchToAccessory:(id)a0 requests:(id)a1 logEvent:(id)a2 completion:(id /* block */)a3;

@end
