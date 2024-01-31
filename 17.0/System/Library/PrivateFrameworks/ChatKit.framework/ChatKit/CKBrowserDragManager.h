@class UIWindow, UIViewController, NSString, CKBrowserDragViewController, UIView, UILongPressGestureRecognizer;
@protocol CKBrowserDragControllerDelegate, CKBrowserDragControllerTranscriptDelegate;

@interface CKBrowserDragManager : NSObject <CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) id currentItem;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } locationInView;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) CKBrowserDragViewController *dragViewController;
@property (retain, nonatomic) UIWindow *dragWindow;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) id<CKBrowserDragControllerDelegate> delegate;
@property (weak, nonatomic) id<CKBrowserDragControllerTranscriptDelegate> transcriptDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapRecognized:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)beginDraggingItem:(id)a0 withAnimatedDragImage:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)beginDraggingItem:(id)a0 withDragImage:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)browserDragViewController:(id)a0 dragEndedWithTarget:(id)a1;
- (void)browserDragViewController:(id)a0 draggedWithTarget:(id)a1;
- (id)browserDragViewControllerTargetView:(id)a0;
- (id)draggedSticker;
- (id)initWithTargetView:(id)a0;
- (void)setPlusButtonHidden:(BOOL)a0;
- (id)superviewOfView:(id)a0 matchingClass:(Class)a1;
- (BOOL)usesSeparateDragWindow;

@end
