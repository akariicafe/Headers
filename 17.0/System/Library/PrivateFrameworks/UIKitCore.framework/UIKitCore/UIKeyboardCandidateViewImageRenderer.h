@class NSCache, UIView;

@interface UIKeyboardCandidateViewImageRenderer : NSObject

@property (retain, nonatomic) NSCache *imageCache;
@property (weak, nonatomic) UIView *viewForTraitCollection;

+ (id)sharedImageRenderer;

- (id)init;
- (void).cxx_destruct;
- (id)drawGradientImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 applyScale:(BOOL)a3;
- (id)edgeMaskImageForRightSide:(BOOL)a0;
- (id)extensionMaskImage;
- (id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)a0 highlighted:(BOOL)a1;
- (id)highlightedBarCellBackgroundImageWithColor:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)pocketShadowImageForDarkKeyboard:(BOOL)a0 fadesToBottom:(BOOL)a1 drawShadow:(BOOL)a2 topPadding:(double)a3 bottomPadding:(double)a4 height:(double)a5;

@end
