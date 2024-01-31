@class NSString;

@interface PSHotspotModeSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (BOOL)isDiscoverable;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;
+ (id)preferencesURL;
+ (void)setDiscoverable:(BOOL)a0;
+ (BOOL)deviceSupportsPersonalHotspot;
+ (struct NETRBClient { } *)getNETRBClient;


@end
