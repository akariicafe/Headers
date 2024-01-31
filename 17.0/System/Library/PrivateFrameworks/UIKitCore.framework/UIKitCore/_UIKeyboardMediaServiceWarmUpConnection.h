@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)warmUp;
+ (id)sharedConnection;

- (void)warmUp;
- (void).cxx_destruct;

@end
