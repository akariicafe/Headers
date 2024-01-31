@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitorRegistrationContext : NSObject {
    NSNumber *_token;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
}

- (void).cxx_destruct;

@end
