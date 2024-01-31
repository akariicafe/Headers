@class UILongPressGestureRecognizer, NSString, UIScribbleInteraction, UIPinchGestureRecognizer, SBHFolderSettings, SBFloatyFolderBackgroundClipView, UITapGestureRecognizer;

@interface SBFloatyFolderView : SBFolderView <UIScribbleInteractionDelegate, UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate> {
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBHFolderSettings *_folderSettings;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;

@property (retain, nonatomic) UIScribbleInteraction *titleScribbleInteraction;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long backgroundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (id)defaultIconLocation;
+ (Class)_scrollViewClass;

- (void)_handleLongPressGesture:(id)a0;
- (BOOL)_showsTitle;
- (void)_didAddIconListView:(id)a0;
- (void)_configureGesturesIfNecessary;
- (void)fadeContentForMinificationFraction:(double)a0;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (id)_newPageBackgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForScalingView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_updateScrollingState:(BOOL)a0;
- (void)_handleOutsideTap:(id)a0;
- (BOOL)_tapToCloseGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_layoutSubviews;
- (double)_titleFontSize;
- (struct CGPoint { double x0; double x1; })visibleFolderRelativeImageCenterForIcon:(id)a0;
- (void)_handlePinchGesture:(id)a0;
- (void)updateAccessibilityTintColors;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateScalingViewFrame;
- (void)fadeContentForMagnificationFraction:(double)a0;
- (void)setBackgroundAlpha:(double)a0;
- (void)dealloc;
- (void)setLegibilitySettings:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageBackgroundFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumeratePageBackgroundViewsUsingBlock:(id /* block */)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)legibilitySettingsForIconListViews;
- (void)setCornerRadius:(double)a0;
- (id)floatyFolderConfiguration;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_setScrollViewNeedsToClipCorners:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_rubberBandIntervalForOverscroll;
- (id)accessibilityTintColorForBackgroundView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_shouldUseScrollableIconViewInteraction;

@end
