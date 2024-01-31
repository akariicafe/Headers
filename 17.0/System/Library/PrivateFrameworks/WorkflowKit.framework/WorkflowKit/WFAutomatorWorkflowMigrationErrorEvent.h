@class NSString;

@interface WFAutomatorWorkflowMigrationErrorEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *automatorActionIdentifier;
@property (copy, nonatomic) NSString *errorDescription;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
