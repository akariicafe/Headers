@class WFWorkflowDescriptor;

@interface WFRunShortcutContextualAction : WFTopHitItemContextualAction

@property (readonly, nonatomic) WFWorkflowDescriptor *workflow;

- (id)uniqueIdentifier;
- (id)initWithDescriptor:(id)a0 serializedRepresentation:(id)a1 namedQueryInfo:(id)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
