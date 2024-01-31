@protocol UIKBResizingKeyplanePanGestureRecognizerDelegate;

@interface UIKBResizingKeyplanePanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) id<UIKBResizingKeyplanePanGestureRecognizerDelegate> resizingDelegate;

- (void).cxx_destruct;
- (BOOL)_willScrollY;

@end
