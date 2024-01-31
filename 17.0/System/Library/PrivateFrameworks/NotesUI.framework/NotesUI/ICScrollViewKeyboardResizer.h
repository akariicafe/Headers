@class UIScrollView;
@protocol ICScrollViewKeyboardResizerDelegate;

@interface ICScrollViewKeyboardResizer : NSObject

@property (nonatomic, getter=isObservingKeyboardNotifications) BOOL observingKeyboardNotifications;
@property (nonatomic, getter=isAutoResizing) BOOL autoResizing;
@property (nonatomic) BOOL didResizeScrollView;
@property (nonatomic) BOOL showingKeyboard;
@property (nonatomic) BOOL fullyShowingKeyboard;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<ICScrollViewKeyboardResizerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)applyInsetsFromKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 duration:(double)a1;
- (void)clearInsetsWithDuration:(double)a0;
- (void)handleKeyboardDidShow:(id)a0;
- (void)handleKeyboardWillHide:(id)a0;
- (void)handleKeyboardWillShow:(id)a0;
- (void)reapplyInsets;
- (void)startAutoResizing;
- (void)stopAutoResizing;

@end
