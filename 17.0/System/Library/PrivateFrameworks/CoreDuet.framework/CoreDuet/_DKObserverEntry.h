@class NSObject;
@protocol OS_dispatch_queue;

@interface _DKObserverEntry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject *_call;
}

- (void).cxx_destruct;

@end
