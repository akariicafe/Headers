@class WRSignpost, NSObject;
@protocol OS_dispatch_queue;

@interface WRWorkflowProvider : NSObject {
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) WRSignpost *startSignpost;

+ (id)providerForAllWorkflowsWithQueue:(id)a0 callback:(id /* block */)a1;
+ (id)providerForWorkflowWithName:(id)a0 queue:(id)a1 callback:(id /* block */)a2;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleTaskingChanged:(BOOL)a0;

@end
