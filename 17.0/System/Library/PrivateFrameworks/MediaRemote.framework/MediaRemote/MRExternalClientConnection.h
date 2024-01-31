@class NSArray, MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection {
    NSArray *_subscribedPlayerPaths;
}

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (nonatomic) BOOL registeredToNowPlayingUpdates;
@property (nonatomic) BOOL registeredToVolumeUpdates;
@property (nonatomic) BOOL registeredKeyboardUpdates;
@property (nonatomic) BOOL registeredToOutputDeviceUpdates;
@property (nonatomic) BOOL registeredToSystemEndpointUpdates;
@property (nonatomic) unsigned int voiceRecordingState;
@property (retain, nonatomic) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) BOOL cryptoEnabled;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queue:(id)a1;

@end
