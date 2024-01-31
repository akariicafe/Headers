@class NSString;

@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (readonly, nonatomic, getter=isDisplayingNotification) BOOL displayingNotification;
@property (readonly, nonatomic) BOOL shouldBorrowScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
