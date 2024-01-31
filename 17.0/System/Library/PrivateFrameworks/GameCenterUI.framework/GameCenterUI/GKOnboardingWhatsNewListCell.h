@class UIImageView, UILabel, NSArray;

@interface GKOnboardingWhatsNewListCell : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSArray *normalConstraints;
@property (retain, nonatomic) NSArray *axConstraints;
@property (readonly, nonatomic) unsigned long long currentCellType;

- (void)traitCollectionDidChange:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)createConstarints;
- (id)getIconImageFromBundle:(id)a0;
- (id)getIconImageFromSFSymbol:(id)a0;
- (void)setupCell;

@end
