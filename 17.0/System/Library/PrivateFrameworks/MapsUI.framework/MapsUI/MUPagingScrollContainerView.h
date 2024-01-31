@class MUPagingScrollControlsView, UIView;
@protocol MUScrollViewProtocol;

@interface MUPagingScrollContainerView : UIView {
    UIView *_containedView;
    UIView<MUScrollViewProtocol> *_containedScrollView;
    MUPagingScrollControlsView *_controlsView;
}

@property (nonatomic) long long cornerStyle;
@property (nonatomic) BOOL automaticallyFlipsForRTL;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setupSubviews;
- (void)_updateCorner;
- (id)initWithHorizontalScrollView:(id)a0;

@end
