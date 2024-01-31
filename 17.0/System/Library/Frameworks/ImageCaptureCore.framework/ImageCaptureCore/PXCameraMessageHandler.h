@class NSMutableDictionary, NSUUID, PXCameraMessage, NSObject;
@protocol OS_nw_connection, OS_dispatch_source;

@interface PXCameraMessageHandler : NSObject

@property (retain) NSMutableDictionary *messageQueue;
@property id delegate;
@property unsigned int timeout;
@property unsigned int retryCount;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) PXCameraMessage *pingMessage;
@property unsigned int pingInterval;
@property (retain) NSObject<OS_dispatch_source> *pingTimer;
@property (copy, nonatomic) NSUUID *senderID;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } messageQueueLock;

- (void)dealloc;
- (void)start;
- (id)initWithConnection:(id)a0;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void)sendData:(id)a0;
- (void)addQueueEntry:(id)a0 messageID:(id)a1;
- (id)getQueueEntryMessageID:(id)a0;
- (void)receiveDataWithSize:(unsigned int)a0 headerMsgID:(id)a1;
- (void)receiveMessage;
- (void)removeQueueEntryMessageID:(id)a0;
- (void)setPingMessage:(id)a0 interval:(unsigned int)a1;
- (void)updateQueueEntryMessageID:(id)a0 withKey:(id)a1 value:(id)a2;

@end
