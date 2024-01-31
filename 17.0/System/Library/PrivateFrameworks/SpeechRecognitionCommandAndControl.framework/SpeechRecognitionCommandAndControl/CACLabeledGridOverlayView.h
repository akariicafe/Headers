@class CACZoomController, CACAdaptiveBackdropView, UIView, NSMutableArray;

@interface CACLabeledGridOverlayView : UIView {
    NSMutableArray *_labeledElements;
}

@property (nonatomic) BOOL isSmallEnoughForZooming;
@property (retain, nonatomic) CACZoomController *zoomController;
@property (retain, nonatomic) CACAdaptiveBackdropView *backdrop;
@property (retain, nonatomic) UIView *badgesContainer;
@property (retain, nonatomic) UIView *contrastBadgesContainer;
@property (retain, nonatomic) NSMutableArray *outOfBoxBadgeViews;
@property (retain, nonatomic) NSMutableArray *zoomedGridBadgeViews;
@property (retain, nonatomic) NSMutableArray *allBadgeViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (retain, nonatomic) NSMutableArray *dimmingViews;
@property (nonatomic) BOOL showsNumbersInTopLeft;
@property (nonatomic) BOOL showsElementsAsClickable;

- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)hide;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingContrast:(BOOL)a1;
- (id)_newLineViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addLabeledElements:(id)a0;
- (void)clearLabeledElements;
- (void)zoomOverRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
