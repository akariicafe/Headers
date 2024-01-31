@class UIImageView, UILabel, WFHomeScreenIcon;

@interface WFAddToHomeIconPreviewCell : WFIconCell

@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UILabel *iconLabel;
@property (retain, nonatomic) WFHomeScreenIcon *icon;

+ (double)defaultRowHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureIcon:(id)a0;
- (void)configureName:(id)a0;
- (void)configureWithName:(id)a0 icon:(id)a1;
- (void)redrawIcon;

@end
