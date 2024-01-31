@class UIStackView, FAFamilyMember, UIImageView, UIImage, UIView, UILabel, UIButton;
@protocol FAMemberStackViewDelegate;

@interface FAMemberStackView : UIView {
    UIStackView *vStack;
    UIView *background;
    UIStackView *profileScreenTimeView;
    UILabel *nameLabel;
    UILabel *typeLabel;
    UILabel *screenTimeLabel;
    UIImageView *imageView;
    UIImage *image;
    UIButton *selectMemberButton;
    FAFamilyMember *member;
}

@property (weak, nonatomic) id<FAMemberStackViewDelegate> delegate;

- (id)init;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupButton;
- (id)_configureImageViewWithImage:(id)a0;
- (id)_configureImageWithData:(id)a0;
- (void)_configureWithImage:(id)a0;
- (void)memberCardTapped:(id)a0;
- (void)setFamilyMemberModel:(id)a0;
- (void)setupProfileScreenTimeView;
- (void)setupVStack;

@end
