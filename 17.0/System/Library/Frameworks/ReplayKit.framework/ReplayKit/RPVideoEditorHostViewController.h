@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol>

@property (weak, nonatomic) RPPreviewViewController *previewViewController;
@property (retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext;

- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)a0;

@end
