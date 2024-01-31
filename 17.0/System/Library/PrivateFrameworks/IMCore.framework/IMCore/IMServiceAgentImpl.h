@interface IMServiceAgentImpl : IMServiceAgent

+ (id)notificationCenter;
+ (void)initialize;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)sharedAgent;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (void)_determineStatusImageAppearance;

- (id)serviceWithName:(id)a0;
- (id)notificationCenter;
- (id)init;
- (void)dealloc;
- (void)_daemonDisconnected:(id)a0;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)_statusImageAppearanceChanged:(id)a0;
- (void)setupComplete;
- (unsigned long long)vcCapabilities;
- (void)_customMessagesChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;

@end
