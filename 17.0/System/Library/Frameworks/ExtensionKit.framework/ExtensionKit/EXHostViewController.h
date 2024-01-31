@class _EXHostSessionDriver, _EXHostViewControllerConfiguration, UIView, UIViewController;
@protocol EXHostViewControllerDelegate;

@interface EXHostViewController : UIViewController <_EXHostViewControllerProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) UIViewController *embededViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *placeholderView;
@property (readonly) UIView *view;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)setConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)configuration;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)embedViewController:(id)a0;

@end
