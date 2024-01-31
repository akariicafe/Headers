@interface SwiftUI.UILargeContentViewerInteractionBridge : NSObject <UILargeContentViewerInteractionDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ interaction;
    void /* unknown type, empty encoding */ gesture;
    void /* unknown type, empty encoding */ simultaneousGesture;
    void /* unknown type, empty encoding */ activeItem;
    void /* unknown type, empty encoding */ largeContentViewTreeSeed;
    void /* unknown type, empty encoding */ largeContentViewTree;
    void /* unknown type, empty encoding */ showLargeContentViewer;
}

- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)largeContentViewerInteraction:(id)a0 didEndOnItem:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)largeContentViewerInteraction:(id)a0 itemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)enabledStatusDidChange;

@end
