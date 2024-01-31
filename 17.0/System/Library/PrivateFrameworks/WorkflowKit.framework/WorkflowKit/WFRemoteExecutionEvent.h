@class NSString;

@interface WFRemoteExecutionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *destinationType;
@property (copy, nonatomic) NSString *connectionType;
@property (nonatomic) BOOL completed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
