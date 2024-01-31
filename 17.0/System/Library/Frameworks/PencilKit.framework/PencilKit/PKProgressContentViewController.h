@interface PKProgressContentViewController : UIViewController

@property (nonatomic) double progress;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_contentView;
- (BOOL)_canShowWhileLocked;

@end
