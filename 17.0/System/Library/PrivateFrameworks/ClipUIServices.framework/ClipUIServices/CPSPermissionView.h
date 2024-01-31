@class NSString, CPSButton;

@interface CPSPermissionView : UIView <UITextViewDelegate> {
    CPSButton *_permissionButton;
    NSString *_appName;
    BOOL _requestsNotificationPermission;
    BOOL _requestsLocationConfirmationPermission;
    BOOL _permissionTextNeedsUpdate;
}

@property (copy, nonatomic) id /* block */ optionsAction;
@property (nonatomic) BOOL notificationPermissionEnabled;
@property (nonatomic) BOOL locationConfirmationPermissionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithAppName:(id)a0 requestsNotificationPermission:(BOOL)a1 requestsLocationConfirmationPermission:(BOOL)a2;
- (void)permissionButtonTapped:(id)a0;
- (void)setLocationConfirmationPermissionEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setNotificationPermissionEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)toggleLocationConfirmationPermission;
- (void)toggleNotificationPermission;
- (void)transitionViewAnimated:(BOOL)a0;

@end
