@class UIView, NSArray, _UILegibilitySettings, UIImageView, CNContact, SBWindowSceneStatusBarSettingsAssertion, NSLayoutConstraint, UILabel, UIActivityIndicatorView;

@interface SBLogoutProgressView : UIView {
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property (retain, nonatomic) CNContact *userContact;
@property (copy, nonatomic) NSArray *pendingApplications;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isProgressVisible) BOOL progressVisible;

- (void)_updateLegibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateViewData;
- (double)_goodbyeLabelBaselineOffset;
- (double)_moreDocumentsLabelBaselineOffset;
- (void)_updateBlame;
- (void)_updateGoodbye;
- (void)_updateUserAvatar;
- (void)_updateUserAvatarLegibility;
- (double)_userAvatarVerticalOffsetFromCenter;
- (void)setProgressVisible:(BOOL)a0;

@end
