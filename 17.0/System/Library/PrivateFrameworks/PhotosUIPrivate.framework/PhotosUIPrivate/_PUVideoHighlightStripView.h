@class NSArray, UIColor;

@interface _PUVideoHighlightStripView : UIView {
    NSArray *_highlightViews;
}

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (retain, nonatomic) NSArray *highlightTimeRanges;
@property (nonatomic) long long currentTimeRangeIndex;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (retain, nonatomic) UIColor *highlightColor;

- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateBarsExpanded;
- (void)_updateCurrentTimeRangeIndex;
- (void)_updateHighlightViews;

@end
