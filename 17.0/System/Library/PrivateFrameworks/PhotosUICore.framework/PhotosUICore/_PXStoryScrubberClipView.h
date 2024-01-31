@class _PXStoryScrubberClipViewConfiguration, UIView;

@interface _PXStoryScrubberClipView : PXGFocusEffectView

@property (retain, nonatomic) UIView *highlightOverlayView;
@property (retain, nonatomic) UIView *dimOverlayView;
@property (copy, nonatomic) _PXStoryScrubberClipViewConfiguration *userData;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
