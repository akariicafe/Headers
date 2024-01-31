@class NSString;

@interface WFAutomatorWorkflowActionMigrationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *automatorActionIdentifier;
@property (nonatomic) BOOL completed;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
