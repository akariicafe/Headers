@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRUITestMessageCenter : NSObject {
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    BOOL _started;
    BOOL _isSender;
}

+ (id)defaultCenter;

- (id)init;
- (id)_init;
- (void)setHandler:(id)a0 forMessageNamed:(id)a1;
- (void)stop;
- (void)didReceiveMessage:(id)a0;
- (void).cxx_destruct;
- (void)_sendMessageNamed:(id)a0 userInfo:(id)a1 isReply:(BOOL)a2 messageUUID:(id)a3 reply:(id /* block */)a4;
- (void)sendMessageNamed:(id)a0 userInfo:(id)a1 reply:(id /* block */)a2;
- (void)startReceiver;
- (void)startSender;

@end
