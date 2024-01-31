@class UILongPressGestureRecognizer, NSString, UIPDFPageView, UIMenuController, UIPDFSelectionController, UIPDFMagnifierController, UITapGestureRecognizer;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    BOOL _trackingSelection;
    BOOL _showMagnifier;
    BOOL _showLoupe;
    BOOL _firstTouch;
    BOOL _useDelegateForLinks;
}

@property BOOL allowMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)releaseViewManager;

- (id)initWithView:(id)a0;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)nextResponder;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)showMenu;
- (void)hideMenu;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)briefPressRecognized:(id)a0;
- (BOOL)delegateGesture:(id)a0 kind:(int)a1;
- (void)disableRecognizers;
- (void)doubleTapRecognized:(id)a0;
- (void)enableRecognizers;
- (void)longPressRecognized:(id)a0;
- (void)setFirstTouch;
- (void)singleTapRecognized:(id)a0;
- (void)twoFingerTapRecognized:(id)a0;

@end
