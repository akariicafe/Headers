@class SiriSharedUIContentPlatterViewController, UIViewController, NSString;

@interface SiriUINavigationContentViewController : UIViewController <SiriSharedUIContentPlatterViewControllerContaining>

@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;
@property (readonly, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)title;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_navigationContentView;
- (void)contentViewDidUpdateSize;

@end
