@interface _MPRemoteLaunchCommandCenter : MPRemoteCommandCenter

- (void)dealloc;
- (void)_stopMediaRemoteSync;
- (void)_scheduleSupportedCommandsChanged:(BOOL)a0;
- (void)_startMediaRemoteSync;

@end
