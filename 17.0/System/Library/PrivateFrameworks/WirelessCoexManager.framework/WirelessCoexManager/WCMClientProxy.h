@class NSObject;
@protocol OS_dispatch_queue, WCMClientCallback, OS_xpc_object;

@interface WCMClientProxy : NSObject {
    int mProcessId;
    id<WCMClientCallback> mDelegate;
    NSObject<OS_dispatch_queue> *mQueue;
    BOOL mIsRegistered;
    NSObject<OS_xpc_object> *mConnection;
}

- (BOOL)connectToServer;
- (id)init;
- (void)dealloc;
- (void)reConnect;
- (id)initWithClientProcessId:(int)a0 delegate:(id)a1 dispatch:(id)a2;
- (void)registerToServer;
- (void)sendMessage:(int)a0 argument:(id)a1;

@end
