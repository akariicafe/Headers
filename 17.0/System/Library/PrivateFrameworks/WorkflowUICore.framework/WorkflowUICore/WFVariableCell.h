@class WFVariablePillView, NSString, WFIcon, WFVariable;

@interface WFVariableCell : UICollectionViewCell

@property (readonly, nonatomic) WFVariablePillView *pillView;
@property (retain, nonatomic) NSString *currentTitle;
@property (retain, nonatomic) WFIcon *currentIcon;
@property (nonatomic) BOOL currentAvailable;
@property (nonatomic) unsigned long long currentControlState;
@property (retain, nonatomic) WFVariable *variable;

+ (double)widthWithVariable:(id)a0 height:(double)a1;

- (unsigned long long)accessibilityTraits;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)updateVariableImage;

@end
