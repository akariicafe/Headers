@class NSString, WFDialogAttribution, WFWorkflowRunViewSource;

@interface WFDialogRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *promptForDisplay;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic) BOOL isLastAction;
@property (nonatomic) BOOL requiresRunningShortcut;
@property (readonly, nonatomic) BOOL shouldCenterPrompt;
@property (readonly, nonatomic) BOOL hasMultilineTextEntry;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0 prompt:(id)a1;
- (id)initWithAttribution:(id)a0 prompt:(id)a1;
- (id)requestByCompactingRequest;

@end
