@class NSString, CADisplayLink, EDGridView, UIView, EDColorAnalyzer, UIPointerInteraction;
@protocol EDLensViewDelegate;

@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate> {
    UIView *_hoverColorCenterView;
    UIView *_hoverColorRingView;
    EDGridView *_gridView;
    UIView *_screenshotSurfaceView;
    UIView *_ringBorderView;
    CADisplayLink *_displayLink;
    EDColorAnalyzer *_colorAnalyzer;
    struct EDColor { double r; double g; double b; } _hoverColor;
    double _hoverColorBrightness;
    UIPointerInteraction *_pointerInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EDLensViewDelegate> delegate;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL floatingMode;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) struct CGPoint { double x; double y; } lastPosition;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffsetAtTouchDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)_displayLinkFired;
- (id)accessibilityValue;
- (long long)_lensPosition;
- (BOOL)_isScreenScaleEven;
- (void)_layoutStaticElements;
- (struct CGPoint { double x0; double x1; })_lensViewLocalCenter;
- (void)_updateLastPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)dragItemsForInteraction:(id)a0;
- (void)presentAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)selectColor;
- (void)updateCenterOffsetAtTouchDown:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLensViewWithEvent:(id)a0;

@end
