@class VKQuad, NSString, NSArray, UITapGestureRecognizer, CAShapeLayer, NSDictionary, VKCMRCDataDetectorElement, UIBezierPath, UIPointerInteraction, UIContextMenuInteraction, VKCBaseDataDetectorElement;
@protocol VKCDataDetectorElementViewDelegate;

@interface VKCDataDetectorElementView : VKPlatformView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, VKCDataDetectorCatalystRevealHighlighterDelegate>

@property (retain, nonatomic) CAShapeLayer *highlightPathLayer;
@property (retain, nonatomic) UIBezierPath *highlightPath;
@property (readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property (readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
@property (readonly, nonatomic) double lineWithForAverageSubquadHeight;
@property (readonly, nonatomic) BOOL shouldUseBCSAction;
@property (readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property (nonatomic) BOOL isPerformingManualContextInvocation;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (retain, nonatomic) NSDictionary *dataDetectorContext;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (weak, nonatomic) id<VKCDataDetectorElementViewDelegate> delegate;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier;
@property (readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement;
@property (readonly, nonatomic) NSArray *allDataDetectorElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (unsigned long long)accessibilityTraits;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)accessibilityIdentifier;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (id)analyticsEventWithDDType:(long long)a0;
- (id)calcPathForUnderline;
- (void)highlighter:(id)a0 shouldHighlight:(BOOL)a1;
- (BOOL)ignoresHitTest;
- (id)initWithDataDetectorElement:(id)a0 unfilteredElements:(id)a1;
- (BOOL)isPointInQuad:(struct CGPoint { double x0; double x1; })a0;
- (void)manuallyActivateLongPressMenuInteraction;
- (id)presentingViewControllerForInteraction;
- (void)sendAnalyticsEventIfNecessaryForDDType:(long long)a0;
- (void)updateHighlightPath;

@end
