@class NSArray, NSMutableSet, NSString;
@protocol VKCImageDataDetectorViewDelegate;

@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate>

@property (retain, nonatomic) NSArray *allElements;
@property (retain, nonatomic) NSArray *unfilteredElements;
@property (retain, nonatomic) NSArray *displayedElements;
@property (retain, nonatomic) NSMutableSet *_displayedElementViews;
@property (readonly, nonatomic) BOOL needsElementFrameUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsUsedToCalculateElementFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRectUsedToCalculateElementFrames;
@property (weak, nonatomic) id<VKCImageDataDetectorViewDelegate> delegate;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) NSArray *displayedElementViews;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlightSelectableItems:(BOOL)a0 animated:(BOOL)a1;
- (id)previewForDataDetectorElementView:(id)a0;
- (void)updateAllElementViewFrames;
- (void)loadDataDetectorViewsFromDisplayedElements;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRecognitionResult:(id)a0;
- (void)willDismissMenuForDataDetectorElementView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDataDetectorElement:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)updateAllElementViewFramesIfNecessary;
- (void)activateLongPressDataDetectorAtPoint:(struct CGPoint { double x0; double x1; })a0 maxDistance:(double)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewImageBoundsForDataDetectorElementView:(id)a0;
- (id)closestElementToPoint:(struct CGPoint { double x0; double x1; })a0 maxDistance:(double)a1;
- (BOOL)dataDetectorElementView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)previewImageForDataDetectorElementView:(id)a0;
- (void)willDisplayMenuForDataDetectorElementView:(id)a0;
- (void)updateDisplayedElements;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)shouldFilterElementForSpecialCase:(id)a0;
- (id)presentingViewControllerForInteractionWithDataDetectorElementView:(id)a0;
- (void)layoutSubviews;
- (void)setCustomAnalyticsIdentifier:(id)a0;
- (id)viewSpaceQuadsForDataDetectorElement:(id)a0;
- (void)dataDetectorElementView:(id)a0 analyticsEventOccured:(id)a1;

@end
