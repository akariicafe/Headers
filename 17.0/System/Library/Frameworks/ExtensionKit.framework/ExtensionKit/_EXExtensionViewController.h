@class UIViewController, _EXViewControllerSceneConfiguration;

@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>

@property (readonly) UIViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)makeContentViewController;

@end
