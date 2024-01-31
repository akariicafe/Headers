@class NSString, WFWorkflowIcon;

@interface WFConfiguredStaccatoWorkflowAction : WFConfiguredStaccatoAction

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, copy, nonatomic) NSString *workflowIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 workflowIdentifier:(id)a1 workflowIcon:(id)a2 associatedBundleIdentifier:(id)a3 shortcutsMetadata:(id)a4;
- (id)initWithWorkflow:(id)a0 shortcutsMetadata:(id)a1;
- (id)previewIcon;

@end
