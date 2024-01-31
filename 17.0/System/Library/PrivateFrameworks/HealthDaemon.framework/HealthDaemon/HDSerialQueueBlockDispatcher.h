@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDSerialQueueBlockDispatcher : NSObject <HDBlockDispatcher> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchBlock:(id /* block */)a0 name:(id)a1;

@end
