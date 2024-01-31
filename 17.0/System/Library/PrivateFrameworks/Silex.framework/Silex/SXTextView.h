@class SXTextTangierFlowRep, NSString, CALayer, SXTextLayouter, SXTextSource, SXTextTangierContainerInfo, TSDCanvas, TSDLayoutController;
@protocol SXTextTangierRepAccessibilityElement, SXTextViewDelegate;

@interface SXTextView : UIView <SXTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, SXTextCanvasRenderSource>

@property (readonly, nonatomic) TSDLayoutController *layoutController;
@property (retain, nonatomic) CALayer *repContainerLayer;
@property (retain, nonatomic) CALayer *overlayContainerLayer;
@property (weak, nonatomic) TSDCanvas *canvas;
@property (weak, nonatomic) SXTextTangierFlowRep<SXTextTangierRepAccessibilityElement> *rep;
@property (retain, nonatomic) SXTextLayouter *textLayouter;
@property (weak, nonatomic) id<SXTextViewDelegate> delegate;
@property (readonly, nonatomic) SXTextSource *textSource;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } parentFrame;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) SXTextTangierContainerInfo *textInfo;
@property (nonatomic) BOOL mightBeVisuallyMisplaced;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (id)initWithCoder:(id)a0;
- (void)_updateOverlayTransform;
- (id)accessibilityCustomRotorMembershipForRep:(id)a0;
- (BOOL)accessibilityRepIsSelectable:(id)a0;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(id)a0 forRep:(id)a1;
- (void)directLayerHostUpdateOverlayLayers:(id)a0 forRep:(id)a1;
- (void)directLayerHostUpdateWithContainerLayer:(id)a0 forRep:(id)a1;
- (void)directLayerhostUpdateTopLevelTilingLayers:(id)a0 forRep:(id)a1;
- (id)infoGeometry;
- (void)provideInfosLayoutTo:(id)a0;

@end
