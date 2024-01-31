@class NSArray, UIView, PKTextInputFeedbackController;

@interface PKTextInputGestureFeedbackView : UIView {
    BOOL __needsRefresh;
    PKTextInputFeedbackController *_dataSourceController;
    NSArray *__highlightViews;
    UIView *__reserveSpaceView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } __reserveSpaceCaretRect;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
