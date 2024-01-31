@class NSArray, SiriSharedUIContentPlatterView;

@interface SiriSharedUIContentPlatterViewController : UIViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)appendSeparatorToViewControllers:(id)a0 forNextViewController:(id)a1;

@end
