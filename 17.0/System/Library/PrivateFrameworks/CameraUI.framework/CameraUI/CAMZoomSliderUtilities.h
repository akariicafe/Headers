@interface CAMZoomSliderUtilities : NSObject

+ (void)layoutZoomSlider:(id)a0 forLayoutStyle:(long long)a1 bottomBar:(id)a2 previewView:(id)a3 viewfinderView:(id)a4;
+ (void)layoutZoomSlider:(id)a0 forLayoutStyle:(long long)a1 bottomBarAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 bottomBarTransparent:(BOOL)a3 shutterButtonAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 previewViewAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 viewfinderViewAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;

@end
