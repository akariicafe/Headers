@class NSString;

@interface WFRenameShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
