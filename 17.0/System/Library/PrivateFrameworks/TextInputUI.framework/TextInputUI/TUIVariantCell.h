@class NSString, NSArray, UIKBRenderTraits, UILabel, UIView;

@interface TUIVariantCell : UIView

@property (readonly, nonatomic) UILabel *labelView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) NSString *displayString;
@property (retain, nonatomic) UIKBRenderTraits *traits;
@property (nonatomic) unsigned long long indexNumber;
@property (nonatomic, getter=isPrimaryVariant) BOOL primaryVariant;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSArray *cellConstraints;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)updateConstraints;
- (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)constraintsToEmbedView:(id)a0 withinView:(id)a1 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)fontForSymbolStyle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 string:(id)a1 traits:(id)a2;

@end
