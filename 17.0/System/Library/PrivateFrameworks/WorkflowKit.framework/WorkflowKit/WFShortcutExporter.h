@class WFWorkflowRecord;

@interface WFShortcutExporter : NSObject

@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord;

- (void).cxx_destruct;
- (void)exportWorkflowWithCompletion:(id /* block */)a0;
- (id)initWithWorkflow:(id)a0 sharingOptions:(id)a1;
- (id)initWithWorkflowRecord:(id)a0;

@end
