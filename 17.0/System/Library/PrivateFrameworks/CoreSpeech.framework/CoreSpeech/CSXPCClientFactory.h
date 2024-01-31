@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForMacOSDuckAudioDevice;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioProviding;

@end
