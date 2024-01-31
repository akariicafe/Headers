@class WFWorkflowIconDrawer;

@interface WFIconComposePreviewView : WFIconView

@property (retain, nonatomic) WFWorkflowIconDrawer *iconDrawer;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (void)redrawIcon;

@end
