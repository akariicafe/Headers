@class UIColor, NSString, UILabel, UIView;

@interface PBUIReplicaDebugView : UIView {
    UILabel *_labelView;
    UIView *_borderView;
    BOOL _labelViewNeedsLayout;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *title;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)debugFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
