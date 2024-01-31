@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>

@property (retain, nonatomic) OFUICircularPagingView *circularPagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)circularPagingViewClass;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)commonInit;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)circularPagingViewDidMoveBackward:(id)a0;
- (void)circularPagingViewDidMoveForward:(id)a0;

@end
