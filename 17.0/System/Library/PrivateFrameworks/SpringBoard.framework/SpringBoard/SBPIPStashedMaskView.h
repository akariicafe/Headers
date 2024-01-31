@class UIView;

@interface SBPIPStashedMaskView : UIView {
    BOOL _tabHidden;
    BOOL _tabShownLeft;
    UIView *_mainBody;
    UIView *_tab;
    UIView *_tabTopCornerFill;
    UIView *_tabBottomCornerFill;
    UIView *_tabLeftTopCornerDestOut;
    UIView *_tabLeftBottomCornerDestOut;
    UIView *_tabRightTopCornerDestOut;
    UIView *_tabRightBottomCornerDestOut;
}

@property (weak, nonatomic) UIView *tabShadowView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tabViewBounds;
@property (nonatomic) struct CGSize { double width; double height; } minimumStashTabSize;

- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainBodyBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 minimumStashTabSize:(struct CGSize { double x0; double x1; })a1;
- (void)setTabHidden:(BOOL)a0 left:(BOOL)a1;

@end
