@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface ICMachineDataActionHandler : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) ICMachineDataActionHandler *sharedHandler;

- (id)init;
- (void)processAction:(id)a0 data:(id)a1 withRequestContext:(id)a2 version:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)processActionFromResponse:(id)a0 withRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
