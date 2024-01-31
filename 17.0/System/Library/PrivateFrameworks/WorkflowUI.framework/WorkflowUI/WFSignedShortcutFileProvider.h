@class WFShortcutPackageFile, WFFileRepresentation;

@interface WFSignedShortcutFileProvider : WFWorkflowItemProvider

@property (retain, nonatomic) WFShortcutPackageFile *shortcutFile;
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile;

- (void).cxx_destruct;
- (id)item;
- (id)initWithWorkflow:(id)a0 userInterface:(id)a1;

@end
