@class UILabel, WFContentCoercionNode, CAShapeLayer;

@interface WFContentCoercionNodeView : UIView

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WFContentCoercionNode *node;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRootNode:(BOOL)a1;

@end
