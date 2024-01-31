@class NSString, HPSAccessorySettingService;

@interface HPAccessorySettingServiceMediator : NSObject <HPAccessorySettingListenerDelegate>

@property (readonly, weak, nonatomic) HPSAccessorySettingService *settingsInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
