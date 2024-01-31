@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerService : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}

- (id)init;
- (void).cxx_destruct;
- (void)performRequest:(id)a0 withResponseHandler:(id /* block */)a1;

@end
