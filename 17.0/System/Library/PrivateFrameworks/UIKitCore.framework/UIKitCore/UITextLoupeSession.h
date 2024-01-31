@class UITextGestureTuning, UIWindow, UIView;
@protocol _UITextLoupeView;

@interface UITextLoupeSession : NSObject {
    BOOL _invalidated;
    BOOL _isHidingStatusBar;
}

@property (weak, nonatomic) UIView *interactionView;
@property (weak, nonatomic) UIWindow *containerWindow;
@property (retain, nonatomic) UIView<_UITextLoupeView> *loupeView;
@property (retain, nonatomic) UITextGestureTuning *gestureTuning;

+ (id)_beginLoupeSessionAtPoint:(struct CGPoint { double x0; double x1; })a0 fromSelectionWidgetView:(id)a1 inView:(id)a2 orientation:(unsigned long long)a3;
+ (id)_makeLoupeViewForSourceView:(id)a0 selectionWidget:(id)a1 orientation:(unsigned long long)a2;
+ (id)beginLoupeSessionAtPoint:(struct CGPoint { double x0; double x1; })a0 fromSelectionWidgetView:(id)a1 inView:(id)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_locationInContainerCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateStatusBarVisibility;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 withCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 trackingCaret:(BOOL)a2;

@end
