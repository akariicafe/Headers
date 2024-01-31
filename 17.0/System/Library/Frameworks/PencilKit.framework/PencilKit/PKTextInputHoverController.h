@class UIView, NSString, PKHoverController, PKTextInputElement, NSArray, CAShapeLayer, CALayer, PKTextInputElementContent;
@protocol PKTextInputHoverControllerDelegate;

@interface PKTextInputHoverController : NSObject <PKHoverControllerDelegate> {
    BOOL __shouldHoverFlashElements;
    BOOL __shouldMakeCursorStrong;
    BOOL __lineBreakWaitingForElement;
    BOOL __lineBreakIsAtValidLocation;
    BOOL __iBeamWaitingForElement;
    id<PKTextInputHoverControllerDelegate> _delegate;
    PKHoverController *__hoverController;
    CAShapeLayer *__hoverDebugLayer;
    PKTextInputElement *__hoverElementToFocus;
    UIView *__hoverFlashElementsView;
    NSArray *__hoverFlashElements;
    UIView *__currentHoverFlashElementView;
    double __lineBreakTimestamp;
    long long __lineBreakNumLines;
    double __lineBreakIsAtValidLocationTimestamp;
    PKTextInputElement *__lineBreakElement;
    PKTextInputElement *__hidePlaceholderElement;
    PKTextInputElement *__ibeamElement;
    PKTextInputElementContent *__ibeamElementContent;
    CALayer *__ibeamLayer;
    double __ibeamLastTimestamp;
    struct CGPoint { double x; double y; } __lineBreakPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } __ibeamFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)hoverController:(id)a0 didBegin:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)hoverController:(id)a0 didUpdate:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1;
- (void)hoverController:(id)a0 holdGestureMeanInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a1 latestInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a2;
- (void)hoverControllerDidEnd:(id)a0;
- (void)hoverControllerDidLift:(id)a0;
- (void)hoverControllerHoldGestureEnded:(id)a0;
- (void)unhidePlaceholderElementIfNecessary;

@end
