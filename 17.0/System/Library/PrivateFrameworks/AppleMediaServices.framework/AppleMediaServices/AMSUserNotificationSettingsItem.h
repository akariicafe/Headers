@class NSDictionary, NSString;

@interface AMSUserNotificationSettingsItem : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *updateDictionary;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL userChanged;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 enabled:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;

@end
