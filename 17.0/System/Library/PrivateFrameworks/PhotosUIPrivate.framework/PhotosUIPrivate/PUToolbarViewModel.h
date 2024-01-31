@class NSArray, PUToolbarViewModelChange, UIView, UIViewController;

@interface PUToolbarViewModel : PUViewModel

@property (readonly, nonatomic) PUToolbarViewModelChange *currentChange;
@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController;
@property (nonatomic) BOOL needsToUpdateToolbarSize;
@property (copy, nonatomic) NSArray *toolbarItems;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) double accessoryViewTopOutset;
@property (nonatomic) double accessoryViewMaximumHeight;
@property (nonatomic) double maximumHeight;

- (void)didPublishChanges;
- (void).cxx_destruct;
- (id)newViewModelChange;

@end
