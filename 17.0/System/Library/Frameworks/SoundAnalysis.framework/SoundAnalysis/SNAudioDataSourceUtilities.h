@interface SNAudioDataSourceUtilities : NSObject

+ (id)applyUserDefaultOverridesToAudioConfiguration:(id)a0;
+ (id)audioQueueConfigurationWithAudioConfiguration:(id)a0;
+ (id)builtInMicrophoneDeviceUIDForSession:(id)a0;
+ (id)defaultAudioConfigurationForCurrentHW;
+ (id)defaultAudioConfigurationForProductType:(int)a0;
+ (void)enableAlwaysOnAudioRouting:(void *)a0;
+ (void)setChannelMap:(id)a0 onQueue:(void *)a1 session:(id)a2;

- (id)init;

@end
