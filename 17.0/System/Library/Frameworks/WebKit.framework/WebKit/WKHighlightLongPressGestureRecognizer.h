@class UIScrollView;

@interface WKHighlightLongPressGestureRecognizer : _UIWebHighlightLongPressGestureRecognizer {
    struct WeakObjCPtr<UIScrollView> { id m_weakReference; } _lastTouchedScrollView;
}

@property (readonly, weak, nonatomic) UIScrollView *lastTouchedScrollView;

- (void)reset;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
