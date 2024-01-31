@class NSMutableArray, UIView;

@interface CACLabeledElementsOverlayView : UIView {
    NSMutableArray *_labeledElements;
    BOOL _positionAtLeft;
}

@property (nonatomic) BOOL displayElementRectangles;
@property (retain, nonatomic) UIView *badgesContainer;
@property (retain, nonatomic) UIView *contrastBadgesContainer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingContrast:(BOOL)a1;
- (id)_viewShowingDebuggingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLabeledElements:(id)a0;
- (void)clearLabeledElements;

@end
