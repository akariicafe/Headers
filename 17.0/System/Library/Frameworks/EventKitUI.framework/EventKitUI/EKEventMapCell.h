@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell

@property (weak, nonatomic) EKEventMapDetailItem *detailItem;
@property (nonatomic) BOOL currentlyLoading;
@property (nonatomic) BOOL mapViewSetup;
@property (nonatomic) BOOL setupAsEmptyView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;

@end
