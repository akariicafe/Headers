@class NSString, CARSession, NSNumber, NSObject;
@protocol OS_dispatch_queue, CARSessionChannelDelegate;

@interface CARSessionChannel : NSObject <CARSessionChannelProviding, BSInvalidatable> {
    struct OpaqueFigEndpointRemoteControlSession { } *_remoteControlSession;
}

@property (readonly, nonatomic) CARSession *session;
@property (readonly, nonatomic) NSString *channelType;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSNumber *qualityOfService;
@property (readonly, nonatomic) NSNumber *streamPriority;
@property (readonly, nonatomic) BOOL withoutReply;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *channelQueue;
@property (weak, nonatomic) id<CARSessionChannelDelegate> channelDelegate;
@property (readonly, nonatomic, getter=isOpened) BOOL opened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_channelInvalidated;
- (void)_channelQueue_closeChannel;
- (void)_dataReceived:(id)a0;
- (id)_endpointValueForKey:(struct __CFString { } *)a0;
- (void)_sendComplete;
- (void)closeChannel;
- (id)initWithSession:(id)a0 channelType:(id)a1;
- (id)initWithSession:(id)a0 channelType:(id)a1 channelID:(id)a2 withoutReply:(BOOL)a3 qualityOfService:(id)a4 streamPriority:(id)a5;
- (BOOL)openChannel;
- (BOOL)openChannelWithError:(id *)a0;
- (BOOL)sendChannelMessage:(id)a0;
- (id)shortChannelType;

@end
