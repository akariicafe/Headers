@class NSSQLCore, NSObject;
@protocol OS_dispatch_queue;

@interface _NSSQLCoreConnectionObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSSQLCore *_core;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
