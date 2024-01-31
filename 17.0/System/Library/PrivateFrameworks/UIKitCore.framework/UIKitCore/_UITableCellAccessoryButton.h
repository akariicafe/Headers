@class UIColor;

@interface _UITableCellAccessoryButton : UIButton

@property (copy, nonatomic) id /* block */ backgroundImageProvider;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (readonly, nonatomic) long long accessoryType;

- (id)viewForLastBaselineLayout;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundImageProvider:(id /* block */)a1 accessoryType:(long long)a2;
- (void).cxx_destruct;
- (id)_backgroundImageView;
- (void)_reloadBackgroundImage;

@end
