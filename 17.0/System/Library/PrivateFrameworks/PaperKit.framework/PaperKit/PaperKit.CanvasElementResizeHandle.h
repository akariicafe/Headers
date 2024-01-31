@interface PaperKit.CanvasElementResizeHandle : UIView <UIPointerInteractionDelegate, UIScribbleInteractionDelegate> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ isControl;
    void /* unknown type, empty encoding */ dragGestureRecognizer;
}

- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
