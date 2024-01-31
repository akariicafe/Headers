@class UIStackView, NSUUID, UIImageView, UIVisualEffectView, UILabel, NSLayoutConstraint, MKPlaceCollectionViewModel;

@interface MKPlaceCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *publisherLogoImageView;
@property (retain, nonatomic) UIImageView *collectionImageView;
@property (retain, nonatomic) UIStackView *metadataStackView;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UILabel *savedCollectionLabel;
@property (retain, nonatomic) UIVisualEffectView *savedView;
@property (retain, nonatomic) UIImageView *checkMarkImageView;
@property (retain, nonatomic) NSLayoutConstraint *logoWidthConstraint;
@property (retain, nonatomic) MKPlaceCollectionViewModel *item;
@property (retain, nonatomic) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)setTextMetadata;
- (void)addCollectionNameView;
- (void)addPublisherLogoImage;
- (void)addSavedCollectionView;
- (void)configureWithModel:(id)a0;
- (void)setImageMetadata;
- (void)setUpCellUsingModel:(id)a0;
- (void)setupAccessibility;
- (void)setupCollectionImage;
- (void)setupCornerRadius;
- (void)setupShadows;
- (void)setupStackView;
- (struct CGSize { double x0; double x1; })sizeForSavedPill;

@end
