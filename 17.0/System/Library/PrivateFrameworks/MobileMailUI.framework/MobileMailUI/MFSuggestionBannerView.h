@class NSArray, UIView;
@protocol SGBannerProtocol;

@interface MFSuggestionBannerView : MFMessageHeaderViewBlock

@property (retain, nonatomic) NSArray *bannerConstraints;
@property (retain, nonatomic) UIView<SGBannerProtocol> *banner;

- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_constraintsForEdges:(unsigned long long)a0 banner:(id)a1 useLayoutMarginsGuide:(BOOL)a2;
- (void)commonInitWithBanner:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 banner:(id)a1;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)a0;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)a0;
- (double)trailingOffsetToMarginForCloseButtonAlignment;

@end
