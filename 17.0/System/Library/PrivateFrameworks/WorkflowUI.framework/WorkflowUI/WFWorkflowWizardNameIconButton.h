@class UIImageView, NSData, WFWorkflowIcon;

@interface WFWorkflowWizardNameIconButton : WFIconButton

@property (weak, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) WFWorkflowIcon *icon;
@property (readonly, nonatomic) NSData *customImageData;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)redrawIcon;
- (void)setIcon:(id)a0 customImageData:(id)a1;

@end
