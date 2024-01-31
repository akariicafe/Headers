@class NSString;

@interface WFMoveShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
