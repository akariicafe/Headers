@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (long long)_checkNetworkForChat:(id)a0 requiresWifi:(BOOL)a1;
- (long long)_runPingTestForChat:(id)a0;
- (void)_conferenceEnded:(id)a0;
- (void)_conferenceWillStart:(id)a0;
- (void)chatStateUpdated;

@end
