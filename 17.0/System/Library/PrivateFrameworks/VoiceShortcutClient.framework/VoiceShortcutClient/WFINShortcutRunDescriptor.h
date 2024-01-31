@class INShortcut;

@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) INShortcut *shortcut;

+ (BOOL)supportsSecureCoding;

- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithShortcut:(id)a0;

@end
