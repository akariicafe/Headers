@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL didRunRemotely;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
