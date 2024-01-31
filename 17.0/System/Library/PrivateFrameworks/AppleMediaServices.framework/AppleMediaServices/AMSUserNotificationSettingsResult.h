@class NSString, NSDictionary;

@interface AMSUserNotificationSettingsResult : NSObject

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSDictionary *itemsMap;

+ (id)_itemsMapForServiceIdentifier:(id)a0 dictionaryRepresentation:(id)a1;

- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0 dictionaryRepresentation:(id)a1;

@end
