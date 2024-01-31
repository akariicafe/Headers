@interface CACVoiceControlServer : AXServer

+ (id)server;
+ (id)_serviceName;
+ (int)_currentDisplayedCorrectionsCommand;
+ (int)_currentlyDisplayedOverlayLabelsCommand;

- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (id)currentlyDisplayedOverlayLabels;
- (id)currentlyDisplayedCorrections;

@end
