@class NSData;

@interface DNDAppConfigurationActionMO : DNDPerAppSettingsMO

@property (retain, nonatomic) NSData *encodedAction;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
