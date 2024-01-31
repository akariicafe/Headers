@class NSString, SUUIAppearance, UIView, UINavigationItem, SUTouchCaptureView;

@interface SUBarButtonItem : UIBarButtonItem {
    SUUIAppearance *_confirmationAppearance;
    UINavigationItem *_lastNavigationItem;
    NSString *_preConfirmationTitle;
    SUTouchCaptureView *_touchCaptureView;
}

@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } accessoryViewInsets;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;

+ (Class)classForNavigationButton;

- (void)dealloc;
- (id)createViewForNavigationItem:(id)a0;
- (void)_addTouchCaptureViewForNavigationButton:(id)a0;
- (id)_navigationButton;
- (void)_removeTouchCaptureView;
- (void)_setTitle:(id)a0 isConfirmation:(BOOL)a1 appearance:(id)a2 animated:(BOOL)a3;
- (void)_touchCaptureAction:(id)a0;
- (void)_updateViewForAccessoryChange;
- (void)configureFromScriptButton:(id)a0;
- (void)hideConfirmationWithAppearance:(id)a0 animated:(BOOL)a1;
- (void)showConfirmationWithTitle:(id)a0 appearance:(id)a1 animated:(BOOL)a2;

@end
