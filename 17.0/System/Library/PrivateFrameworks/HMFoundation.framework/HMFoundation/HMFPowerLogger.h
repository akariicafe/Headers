@interface HMFPowerLogger : HMFObject

+ (id)sharedPowerLogger;

- (void)reportIncomingCloudPush:(id)a0;
- (void)reportIncomingAdvertisementChange:(id)a0;
- (void)reportConnection:(id)a0 linkType:(long long)a1 accessoryCategory:(id)a2;
- (void)reportIncomingIDSPush:(id)a0 fromToken:(id)a1;
- (void)reportIncomingIPEvent:(id)a0;
- (void)reportRemoteReachabilityRegistrationEvent:(BOOL)a0 clientIdentifier:(id)a1;
- (void)reportToPowerLogDestinationTable:(struct __CFString { } *)a0 withEventDictionary:(id)a1;
- (void)reportIncomingIPEvent:(id)a0 accessoryCategory:(id)a1;
- (void)reportWakeEvent:(id)a0 linkType:(long long)a1 accessoryCategory:(id)a2;
- (void)reportIncomingAdvertisementChange:(id)a0 accessoryCategory:(id)a1;
- (id)linkTypeDescription:(long long)a0;
- (void)reportIncomingLoxyMessage:(id)a0;
- (void)reportCharacteristicNotificationRegistrationEvent:(BOOL)a0 clientIdentifier:(id)a1;
- (void)reportDisconnection:(id)a0 linkType:(long long)a1 accessoryCategory:(id)a2;
- (void)reportConnection:(id)a0 linkType:(long long)a1;

@end
