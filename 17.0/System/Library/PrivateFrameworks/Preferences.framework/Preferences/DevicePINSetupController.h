@interface DevicePINSetupController : PSSetupController

@property BOOL success;
@property (nonatomic) BOOL allowOptionsButton;

- (id)init;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (BOOL)popupStyleIsModal;
- (BOOL)usePopupStyle;

@end
