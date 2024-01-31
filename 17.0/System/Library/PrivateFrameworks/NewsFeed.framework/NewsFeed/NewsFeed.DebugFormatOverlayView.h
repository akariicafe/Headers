@interface NewsFeed.DebugFormatOverlayView : UIView {
    void /* unknown type, empty encoding */ selectionFrame;
    void /* unknown type, empty encoding */ selectionContentFrame;
    void /* unknown type, empty encoding */ metricSelectionFrame;
    void /* unknown type, empty encoding */ contentOffset;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ contentTransformation;
    void /* unknown type, empty encoding */ selectionView;
    void /* unknown type, empty encoding */ metricSelectionView;
    void /* unknown type, empty encoding */ rulerView;
}

@property (nonatomic) BOOL userInteractionEnabled;

- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
