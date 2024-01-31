@class NSString;

@interface WFAutoShortcutToggleEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *toggleType;
@property (nonatomic) BOOL enabled;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
