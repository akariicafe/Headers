@class NSString, NSTimer, UIImageView, UIActivityIndicatorView;

@interface EXPlaceholderViewController : UIViewController <_EXHostViewControllerDelegate>

@property (retain) UIActivityIndicatorView *activityView;
@property (weak) NSTimer *timer;
@property (retain) UIImageView *completeIcon;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;

@end
