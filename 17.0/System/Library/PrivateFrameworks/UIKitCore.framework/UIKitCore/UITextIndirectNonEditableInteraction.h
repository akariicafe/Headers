@class _UIKeyboardTextSelectionController, NSString, UIKeyboardTaskQueue;

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {
    _UIKeyboardTextSelectionController *_textSelectionController;
}

@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)dealloc;
- (void)_setupControllersIfNecessaryWithView:(id)a0;
- (void)willBeginGesture;
- (void)finishSetup;
- (void).cxx_destruct;
- (void)didEndGesture;
- (BOOL)shouldAllowSelectionGestures:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (BOOL)shouldAllowWithTouchTypes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;

@end
