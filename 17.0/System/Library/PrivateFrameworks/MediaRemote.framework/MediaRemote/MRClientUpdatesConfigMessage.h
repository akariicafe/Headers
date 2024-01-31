@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (copy, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) BOOL nowPlayingUpdates;
@property (readonly, nonatomic) BOOL artworkUpdates;
@property (readonly, nonatomic) BOOL volumeUpdates;
@property (readonly, nonatomic) BOOL keyboardUpdates;
@property (readonly, nonatomic) BOOL outputDeviceUpdates;
@property (readonly, nonatomic) BOOL systemEndpointUpdates;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithNowPlayingUpdates:(BOOL)a0 artworkUpdates:(BOOL)a1 volumeUpdates:(BOOL)a2 keyboardUpdates:(BOOL)a3 outputDeviceUpdates:(BOOL)a4 systemEndpointUpdates:(BOOL)a5 subscribedPlayerPaths:(id)a6;

@end
