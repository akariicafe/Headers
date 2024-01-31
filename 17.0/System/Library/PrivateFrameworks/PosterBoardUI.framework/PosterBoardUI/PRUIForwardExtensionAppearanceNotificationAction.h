@class NSString;

@interface PRUIForwardExtensionAppearanceNotificationAction : BSAction

@property (readonly, copy, nonatomic) NSString *notificationName;

- (id)initWithNotificationName:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
