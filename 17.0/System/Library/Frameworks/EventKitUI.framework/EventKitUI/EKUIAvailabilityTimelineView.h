@class NSMutableArray, UIView;

@interface EKUIAvailabilityTimelineView : UIScrollView {
    NSMutableArray *_labels;
    UIView *_bottomPixelBorder;
    double _offset;
    double _largestLabelWidth;
}

- (id)init;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)minWidth;
- (void)setContentWidth:(double)a0;
- (void).cxx_destruct;
- (void)setHorizontalScrollOffset:(double)a0;
- (void)setLabels;

@end
