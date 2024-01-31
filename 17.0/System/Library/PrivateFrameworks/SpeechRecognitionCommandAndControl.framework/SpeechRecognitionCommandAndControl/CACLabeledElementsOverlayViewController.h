@interface CACLabeledElementsOverlayViewController : UIViewController <CACViewController>

@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)setLabeledElements:(id)a0;

@end
