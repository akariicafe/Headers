@class UIBarButtonItem, NSString, VUIAppInstallConfirmationView, VUIAppInstallLockup, UIButton;
@protocol WLKInstallable;

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {
    NSString *_updateTitle;
    NSString *_updateMessage;
}

@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (retain, nonatomic) VUIAppInstallConfirmationView *confirmationView;
@property (retain, nonatomic) id<WLKInstallable> installable;
@property (copy, nonatomic) id /* block */ cancelationHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ appStoreHandler;
@property (copy, nonatomic) id /* block */ secondaryLinkHandler;
@property (readonly, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) VUIAppInstallLockup *lockup;
@property (nonatomic) unsigned long long state;

- (id)init;
- (void)setMessage:(id)a0;
- (void)_handleAction;
- (void)loadView;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)_handleCancel;
- (void)_handleAppStore;
- (void)setUpdateTitle:(id)a0;
- (void)_fetchAppInfo;
- (void)_fetchStoreInfoForAdamID:(id)a0 completion:(id /* block */)a1;
- (id)_fileSizeWithDeviceSizes:(id)a0;
- (void)_handleSecondaryLink;
- (id)_namedRatingWithRatings:(id)a0;
- (id)initWithInstallable:(id)a0;
- (void)setInstallingState;
- (void)setPreInstallState;
- (void)setSecondaryLinkTitle:(id)a0;
- (void)setUpdateMessage:(id)a0;

@end
