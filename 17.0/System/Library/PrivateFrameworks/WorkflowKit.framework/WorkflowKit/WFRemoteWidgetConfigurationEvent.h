@class NSString;

@interface WFRemoteWidgetConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *sizeClass;
@property (copy, nonatomic) NSString *widgetIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
