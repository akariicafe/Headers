@class CACLabeledGridOverlayView;

@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController>

@property (retain, nonatomic) CACLabeledGridOverlayView *gridOverlayView;
@property (nonatomic) BOOL showsNumbersInTopLeft;
@property (readonly, nonatomic) BOOL isSmallEnoughForZooming;
@property (nonatomic) BOOL showsElementsAsClickable;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (void)show;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)hide;
- (void)zoomOverRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabeledElements:(id)a0;

@end
