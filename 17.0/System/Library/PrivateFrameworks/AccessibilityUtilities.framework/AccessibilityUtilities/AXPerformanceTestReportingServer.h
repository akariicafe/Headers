@interface AXPerformanceTestReportingServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)assistiveTouchDidLaunch;
- (void)voiceOverDidSpeak:(id)a0;
- (void)voiceOverTouchDidLaunch;

@end
