@class NSString, VTPeerRemoteConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    BOOL _remotePhraseSpotterEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)notifyRemoteOfDismissal;
- (void)notifyRemoteOfEarlyDetect;
- (void)notifyRemoteOfTriggerEvent;
- (void)remoteConnection:(id)a0 handleMessageType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateRemotePhraseSpotterEnabled:(BOOL)a0;

@end
