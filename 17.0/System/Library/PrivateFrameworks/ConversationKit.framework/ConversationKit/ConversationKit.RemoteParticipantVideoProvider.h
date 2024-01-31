@class NSString;

@interface ConversationKit.RemoteParticipantVideoProvider : NSObject <AVCRemoteVideoClientDelegate> {
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ _remoteVideoAttributes;
    void /* unknown type, empty encoding */ _remoteScreenAttributes;
    void /* unknown type, empty encoding */ avcRemoteVideoClient;
    void /* unknown type, empty encoding */ avcRemoteVideoClientDelegate;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void)remoteVideoClient:(id)a0 networkQualityDidDegrade:(BOOL)a1 info:(id)a2;
- (void)remoteVideoClient:(id)a0 remoteMediaDidStall:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 remoteScreenAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoDidPause:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidDegrade:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidSuspend:(BOOL)a1;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
