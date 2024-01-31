@class UIImageView, CKLabel, UILabel, NSMutableArray;
@protocol CKAvatarTitleCollectionReusableViewDelegate;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) CKLabel *titleLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (retain, nonatomic) NSMutableArray *pendingTitles;
@property (weak, nonatomic) id<CKAvatarTitleCollectionReusableViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) long long avatarTitleAccessoryImageType;
@property (nonatomic, getter=isAvatarPickerActive) BOOL avatarPickerActive;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic, getter=isChevronHidden) BOOL chevronHidden;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void)traitCollectionDidChange:(id)a0;
- (BOOL)isLTR;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_animateFromQueue;
- (void)_rotateChevronImageView;
- (void)configureChevronImageView;
- (void)configureWithTitle:(id)a0;
- (void)setTitle:(id)a0 animated:(BOOL)a1;

@end
