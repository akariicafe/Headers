@class NSObject;
@protocol OS_dispatch_queue;

@interface UMQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
