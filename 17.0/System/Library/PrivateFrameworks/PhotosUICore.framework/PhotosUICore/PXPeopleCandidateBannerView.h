@class NSString, UIImage, PHPerson, UIImageView, CNContact, UIButton, PXFeatureSpec, PXPeopleScalableAvatarView, NSLayoutConstraint, UILabel;
@protocol PXPeopleCandidateBannerViewDelegate, UIPopoverPresentationControllerSourceItem;

@interface PXPeopleCandidateBannerView : UIView {
    UIButton *_actionButton;
    UIButton *_notNowButton;
    long long _contactImageRequestVersion;
}

@property (readonly, nonatomic) PXPeopleScalableAvatarView *personAvatarView;
@property (readonly, nonatomic) UIImageView *contactAvatarView;
@property (retain, nonatomic) UIImage *suggestedContactImage;
@property (readonly, nonatomic) UILabel *promptLabel;
@property (readonly, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *notNowToTrailingConstraint;
@property (readonly, nonatomic) long long style;
@property (nonatomic) long long attribution;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) CNContact *contactSuggestion;
@property (retain, nonatomic) NSString *nameSuggestion;
@property (retain, nonatomic) PXFeatureSpec *spec;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> popoverSourceForPrimaryAction;
@property (weak, nonatomic) id<PXPeopleCandidateBannerViewDelegate> delegate;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
