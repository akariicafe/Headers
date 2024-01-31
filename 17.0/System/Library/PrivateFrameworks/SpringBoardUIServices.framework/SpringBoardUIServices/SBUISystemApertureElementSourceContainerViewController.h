@class UIViewController;
@protocol SBUISystemApertureElement;

@interface SBUISystemApertureElementSourceContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController;

- (id)_transitionCoordinator;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_childViewControllerForAlwaysOnTimelines;

@end
