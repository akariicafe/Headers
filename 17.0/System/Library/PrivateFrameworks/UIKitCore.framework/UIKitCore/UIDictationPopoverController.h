@class NSLayoutConstraint, NSString, UILabel, UITextView, UIResponder, NSMutableArray, UIView;
@protocol UITextInput;

@interface UIDictationPopoverController : UIKeyboardPopoverController <_UIScrollViewScrollObserver, _UIGeometryChangeObserver> {
    UIResponder<UITextInput> *_inputDelegate;
    NSMutableArray *_scrollViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initCaretRectInView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editMenuFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clipBounds;
    UIView *_inputAccessoryView;
    UIView *_dictationView;
    NSLayoutConstraint *_dictationViewTopConstraint;
    NSLayoutConstraint *_dictationViewBottomConstraint;
    UILabel *_title;
    UITextView *_textView;
    UIView *_bottomEdgeView;
    BOOL _isVerticalText;
    BOOL _needsRestoreArrowDirction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _popoverFrame;
    double _bottomMargin;
    unsigned long long _arrowDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_observeScrollViewDidScroll:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRect;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)setRemoteDictationPopover:(id)a0;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (BOOL)canPresentTip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipBounds;
- (void)dismissTip;
- (void)forwardRemoteDictationPopover:(BOOL)a0;
- (id)initWithContentView:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 inputDelegate:(id)a2;
- (void)keyboardDidChange:(id)a0;
- (void)movePopoverView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)movePopoverView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 editMenuFrame:(id)a1;
- (void)movePopoverViewForEditMenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)movePopoverViewToCurrentCareLocation;
- (void)presentTip:(id)a0 tipDescription:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
