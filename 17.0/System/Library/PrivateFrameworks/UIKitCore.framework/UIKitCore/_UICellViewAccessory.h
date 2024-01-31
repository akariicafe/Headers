@interface _UICellViewAccessory : _UICellAccessory

@property (nonatomic) long long options;

+ (id)accessoryWithIdentifier:(id)a0 view:(id)a1 options:(long long)a2;
+ (id)accessoryWithIdentifier:(id)a0 view:(id)a1 options:(long long)a2 reservedLayoutWidth:(double)a3;

- (BOOL)alwaysNeedsLayout;
- (BOOL)isEqual:(id)a0;
- (void)setView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
