@interface AXAudioHardwareManager : NSObject

+ (id)sharedManager;
+ (void)setDefaultPort:(id)a0;
+ (BOOL)channelsAreAirplay:(id)a0 route:(id)a1;
+ (BOOL)channelsAreWiredHeadphones:(id)a0;
+ (id)channelsForPort:(id)a0;
+ (id)defaultPort;
+ (id)defaultPortChannels;
+ (id)defaultRouteDescription;
+ (void)disableMultiroute;
+ (void)enableMultiroute;
+ (void)setDefaultPortChannels:(id)a0;
+ (void)setDefaultRouteDescription:(id)a0;
+ (void)updateTestingChannels;

- (id)init;
- (void)_handleSurroundSoundDefaults:(id)a0 returnedChannels:(id)a1 port:(id)a2 source:(long long)a3;
- (id)_savedIdForRouteDescription:(id)a0;
- (BOOL)isDolbyAtmosConfigured;
- (id)savedChannelsForOutput:(id)a0 forSource:(long long)a1;
- (void)setSavedChannels:(id)a0 forOutput:(id)a1 forSource:(long long)a2;

@end
