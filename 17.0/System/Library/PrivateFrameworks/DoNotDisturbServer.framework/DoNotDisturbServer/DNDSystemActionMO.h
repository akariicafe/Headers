@class NSData;

@interface DNDSystemActionMO : DNDPerModeSettingsMO

@property (retain, nonatomic) NSData *encodedAction;
@property (retain, nonatomic) NSData *encodedReverseAction;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
