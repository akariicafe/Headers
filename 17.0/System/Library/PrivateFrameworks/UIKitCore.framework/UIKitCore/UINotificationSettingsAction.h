@class UNNotification;

@interface UINotificationSettingsAction : BSAction

@property (readonly, copy, nonatomic) UNNotification *notification;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (long long)UIActionType;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotification:(id)a0;

@end
