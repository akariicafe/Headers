@class NSString, SXAXCustomRotor, SXTextTangierInteractiveCanvasController;
@protocol SXTextTangierRepAccessibilityDataSource;

@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement>

@property (retain, nonatomic) SXAXCustomRotor *linkRotor;
@property (retain, nonatomic) SXAXCustomRotor *headingsRotor;
@property (weak, nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXTextTangierRepAccessibilityDataSource> accessibilityDataSource;

- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)storage;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)siblings;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPreviousTextNavigationElement;
- (BOOL)accessibilitySupportsTextSelection;
- (id)orderedSiblings;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0 withGesture:(id)a1 passingTest:(id /* block */)a2;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint { double x0; double x1; })a0 isTail:(BOOL)a1 selectionType:(int)a2;
- (BOOL)forceTiling;
- (id)interactiveCanvasController;
- (id)itemsForCustomRotor:(id)a0;
- (BOOL)p_doesRep:(id)a0 containCharIndex:(unsigned long long)a1 isStart:(BOOL)a2;
- (BOOL)preventClipToColumn;
- (id)repForCharIndex:(unsigned long long)a0 isStart:(BOOL)a1;
- (id)supportedCustomRotors;
- (id)sxaxLinkElements;
- (id)sxaxNameForEditRotorAction:(id)a0;
- (id)sxaxSupportedEditRotorActions;
- (BOOL)updateFromVisualPosition;
- (Class)wpEditorClass;

@end
