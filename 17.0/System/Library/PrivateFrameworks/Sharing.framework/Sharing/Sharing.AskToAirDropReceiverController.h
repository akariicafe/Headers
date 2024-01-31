@class NSString, NSArray;

@interface Sharing.AskToAirDropReceiverController : NSObject {
    void /* unknown type, empty encoding */ nearbyDevicesDisplayName;
    void /* unknown type, empty encoding */ stateChangedHandler;
    void /* unknown type, empty encoding */ connectionStateChangedHandler;
    void /* unknown type, empty encoding */ pendingOrActiveConnectionsChangedHandler;
    void /* unknown type, empty encoding */ nearbyDeviceCloseChangedHandler;
    void /* unknown type, empty encoding */ errorHandler;
    void /* unknown type, empty encoding */ connectedNearbyDeviceNames;
    void /* unknown type, empty encoding */ sharingName;
    void /* unknown type, empty encoding */ airDropClient;
    void /* unknown type, empty encoding */ privacyRemoteDeviceNames;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ queue;
@property (nonatomic) void /* unknown type, empty encoding */ isNearbyDeviceClose;
@property (nonatomic) void /* unknown type, empty encoding */ hasPendingOrActiveConnections;
@property (nonatomic) void /* unknown type, empty encoding */ isLegacyMode;
@property (nonatomic, copy) NSString *nearbyDevicesDisplayName;
@property (nonatomic) void /* unknown type, empty encoding */ connectionState;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (nonatomic, copy) id /* block */ connectionStateChangedHandler;
@property (nonatomic, copy) id /* block */ pendingOrActiveConnectionsChangedHandler;
@property (nonatomic, copy) id /* block */ nearbyDeviceCloseChangedHandler;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) BOOL hasSeenPrivacyPrompt;
@property (nonatomic, copy) NSArray *connectedNearbyDeviceNames;
@property (nonatomic, copy) NSString *sharingName;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSharingNameWithCompletion:(id /* block */)a0;
- (void)connectToAllNearbyDevices;
- (void)disconnectFromAllNearbyDevices;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)a0;

@end
