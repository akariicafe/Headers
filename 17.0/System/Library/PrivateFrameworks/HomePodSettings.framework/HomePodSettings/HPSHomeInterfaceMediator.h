@class NSString, HPSHomeInterface;

@interface HPSHomeInterfaceMediator : NSObject <HPSHomeSettingInterface>

@property (readonly, weak, nonatomic) HPSHomeInterface *settingsInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)accessoryDidUpdateAttribute:(id)a0 withContext:(id)a1;

@end
