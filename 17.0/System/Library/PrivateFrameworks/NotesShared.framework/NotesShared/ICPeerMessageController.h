@class NSMutableDictionary;
@protocol ICPeerMessageControllerDelegate;

@interface ICPeerMessageController : NSObject {
    NSMutableDictionary *_deviceRequests;
    NSMutableDictionary *_sourceToDevices;
    NSMutableDictionary *_deviceUUIDToSource;
}

@property (weak, nonatomic) id<ICPeerMessageControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)deviceRequestsForUUID:(id)a0;
- (void)disconnectedFromSource:(id)a0;
- (void)handleKeepAliveMessage:(const void *)a0 fromDevice:(id)a1;
- (void)handleMessage:(id)a0 fromSource:(id)a1;
- (void)handleNoteMessage:(const void *)a0 fromDevice:(id)a1 data:(id)a2;
- (void)handleRequestNoteMessage:(const void *)a0 fromDevice:(id)a1;
- (void)requestNote:(id)a0 from:(id)a1;
- (void)sendKeepAlive;
- (void)sendMediaURL:(id)a0 toSource:(id)a1;
- (id)sendMessage:(void *)a0 toDevices:(id)a1;
- (id)sendMessage:(void *)a0 toSource:(id)a1 completionBlock:(id /* block */)a2;
- (id)sendMessage:(void *)a0 toSources:(id)a1;
- (id)sendNote:(id)a0 toDevices:(id)a1;

@end
