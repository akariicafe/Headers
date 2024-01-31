@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController

@property (retain, nonatomic) SUICProgressEventViewController *progressEventViewController;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)handleEvent:(unsigned long long)a0;

@end
