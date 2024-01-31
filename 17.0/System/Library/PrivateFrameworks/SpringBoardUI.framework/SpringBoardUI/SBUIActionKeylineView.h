@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) double height;

- (void)willMoveToSuperview:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCornerMask;
- (double)heightInPixels;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;

@end
