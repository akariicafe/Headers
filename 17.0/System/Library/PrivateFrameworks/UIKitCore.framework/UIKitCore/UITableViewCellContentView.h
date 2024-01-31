@interface UITableViewCellContentView : UIView {
    struct { unsigned char edgesForOverridingDefaultLayoutMargins : 4; } _contentViewFlags;
}

@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } overriddenDefaultLayoutMargins;

+ (id)classFallbacksForKeyedArchiver;

- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_tableViewCellContentViewCommonSetup;
- (id)initWithCoder:(id)a0;

@end
