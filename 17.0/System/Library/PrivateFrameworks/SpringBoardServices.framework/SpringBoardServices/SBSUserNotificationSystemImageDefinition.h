@class NSString, SBSUserNotificationColorDefinition;

@interface SBSUserNotificationSystemImageDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) SBSUserNotificationColorDefinition *tintColor;

+ (id)_definitionType;

- (id)build;
- (id)initWithSystemImageName:(id)a0 tintColor:(id)a1;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (id)_initWithSystemImageName:(id)a0 tintColor:(id)a1;

@end
