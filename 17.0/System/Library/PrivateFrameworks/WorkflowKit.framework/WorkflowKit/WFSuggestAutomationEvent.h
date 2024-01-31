@class NSString;

@interface WFSuggestAutomationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) BOOL interacted;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
