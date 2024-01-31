@class NSString;

@interface WFAutomatorWorkflowMigrationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned int automatorActionCount;
@property (nonatomic) BOOL completed;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
