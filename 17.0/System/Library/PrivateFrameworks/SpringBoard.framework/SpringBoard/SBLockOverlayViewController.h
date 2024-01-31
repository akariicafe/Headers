@protocol SBLockOverlayViewControllerDelegate;

@interface SBLockOverlayViewController : UIViewController

@property (weak, nonatomic) id<SBLockOverlayViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldBeHidden;

- (id)overlayView;
- (void).cxx_destruct;

@end
