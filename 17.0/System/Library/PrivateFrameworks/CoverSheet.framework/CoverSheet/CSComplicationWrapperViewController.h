@class CHUISWidgetHostViewController, UIView;

@interface CSComplicationWrapperViewController : UIViewController

@property (retain, nonatomic) UIView *dimmingView;
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithWidgetHostViewController:(id)a0;

@end
