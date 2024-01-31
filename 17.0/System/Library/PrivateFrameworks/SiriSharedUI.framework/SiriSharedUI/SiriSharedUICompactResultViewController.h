@class SiriSharedUICompactResultView, SiriSharedUIContentPlatterViewController;

@interface SiriSharedUICompactResultViewController : UIViewController

@property (readonly, nonatomic) SiriSharedUICompactResultView *compactResultView;
@property (copy, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
