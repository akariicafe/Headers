@class UIBarButtonItem, NSString, UIImageView, UIToolbar, UILabel, UIButton, UINavigationBar;

@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {
    UIToolbar *_bottomToolbar;
    UIImageView *_browserIconView;
    id /* block */ _dismissalHandler;
    UILabel *_linkCaptionLabel;
    UILabel *_linkTitleLabel;
    UINavigationBar *_topNavigationBar;
    UIBarButtonItem *_dismissButton;
    UIButton *_largeDismissButton;
}

@property (nonatomic) double topLayoutGuideInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blankPlaceholder;
+ (id)compatibilityPlaceholderWithAppName:(id)a0 destinationURL:(id)a1 forAuthentication:(BOOL)a2 dismissalHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)positionForBar:(id)a0;
- (void)_dismissTapped:(id)a0;
- (void)updateBarTintColor:(id)a0;
- (void)updateControlTintColor:(id)a0;
- (void)updateDismissButtonStyle:(long long)a0;

@end
