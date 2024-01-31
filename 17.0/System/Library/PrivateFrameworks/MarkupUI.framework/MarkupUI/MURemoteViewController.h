@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol>

@property long long sandboxExtensionHandle;
@property BOOL shouldResignFirstResponder;
@property (copy, nonatomic) id /* block */ finishedWithResultsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)canResignFirstResponder;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)beginDismissWithInfo:(id)a0;
- (void)serviceDidFinishwithResults:(id)a0 andSandboxExtension:(id)a1;

@end
