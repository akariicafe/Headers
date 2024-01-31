@class NSString;

@interface SiriInCallSettingConfig : NSObject <AssistantSiriInCallControllerConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supported;
+ (BOOL)enabled;
+ (void)setEnabled:(BOOL)a0;
+ (id)localizationKey;


@end
