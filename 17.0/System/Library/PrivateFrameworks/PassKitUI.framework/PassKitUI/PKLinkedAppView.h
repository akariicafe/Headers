@class UILabel, NSString, NSArray, NSURL, PKContinuousButton, UIImageView, PKLinkedAppUserRatingView, UIActivityIndicatorView, PKLinkedApplication, UIColor;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver> {
    UIImageView *_iconView;
    UILabel *_appName;
    PKContinuousButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
}

@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *buttonTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setApplicationName:(id)a0;
- (void)_cleanupViews;
- (void)_layoutLoadingView;
- (void)setApplicationIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)_buttonPressed:(id)a0;
- (void)setPrice:(id)a0;
- (void)setCustomProductPageIdentifier:(id)a0;
- (void)setLoadingText:(id)a0;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)initWithLinkedApplication:(id)a0 reuseIdentifier:(id)a1;
- (id)initWithStoreIDs:(id)a0 systemAppBundleIdentifiers:(id)a1 appLaunchURL:(id)a2 reuseIdentifier:(id)a3;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)reloadApplicationStateIfNecessary;

@end
