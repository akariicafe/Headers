@class WFActionDrawerImageLoadTask, WFCircularImageView, WFActionDrawerImage, NSArray, UILabel, NSString, UIViewController;
@protocol VCActionDonation;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) WFCircularImageView *imageView;
@property (retain, nonatomic) WFActionDrawerImage *image;
@property (retain, nonatomic) WFActionDrawerImageLoadTask *imageLoadTask;
@property (weak, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *verticalStackConstraints;
@property (retain, nonatomic) NSArray *horizontalStackConstraints;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long cellType;
@property (readonly, nonatomic) id<VCActionDonation> donation;
@property (weak, nonatomic) UIViewController *containingViewController;

+ (double)spacingForType:(long long)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForType:(long long)a0 forTraitCollection:(id)a1;
+ (BOOL)shouldStackVerticallyForTraitCollection:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForCellUsingVerticalStacking:(BOOL)a0;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)adjustStackingStyle;
- (void)configureWithCellType:(long long)a0 title:(id)a1 donation:(id)a2 genericAction:(id)a3 forDailyRoutines:(BOOL)a4;
- (void)loadImageForInteractionDonation:(id)a0;
- (void)setUpLayoutConstraints;
- (BOOL)shouldStackVerticallyForTraitCollection:(id)a0;

@end
