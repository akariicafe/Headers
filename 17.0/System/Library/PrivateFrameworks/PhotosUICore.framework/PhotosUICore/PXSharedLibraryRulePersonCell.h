@class PHPerson, UIImageView, UILabel, UIButton;

@interface PXSharedLibraryRulePersonCell : UICollectionViewCell

@property (retain, nonatomic) PHPerson *imagePerson;
@property (readonly, nonatomic) UIImageView *faceImageView;
@property (readonly, nonatomic) UIImageView *plusImageView;
@property (readonly, nonatomic) UIImageView *minusImageView;
@property (readonly, nonatomic) UIButton *minusButton;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id removeTarget;
@property (nonatomic) SEL removeAction;

- (void)traitCollectionDidChange:(id)a0;
- (void)remove:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateMinusButton;

@end
