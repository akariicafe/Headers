@class FBSScene, NSString, PRWidgetGridViewController;

@interface PRSidebarComplicationsSnapshotViewController : UIViewController <BSInvalidatable>

@property (retain, nonatomic) FBSScene *scene;
@property (retain, nonatomic) PRWidgetGridViewController *widgetGridViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0 complicationLayoutProvider:(id)a1;

@end
