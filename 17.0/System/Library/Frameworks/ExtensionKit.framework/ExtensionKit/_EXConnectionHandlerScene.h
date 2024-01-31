@class NSString, UIViewController;

@interface _EXConnectionHandlerScene : NSObject <_EXViewControllerScene>

@property (retain) UIViewController *viewController;
@property (retain) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;
- (void)connectToSession:(id)a0;

@end
