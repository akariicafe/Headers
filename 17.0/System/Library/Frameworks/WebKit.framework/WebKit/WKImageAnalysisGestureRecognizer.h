@class UIScrollView, UIView;
@protocol WKImageAnalysisGestureRecognizerDelegate;

@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}

@property (readonly, nonatomic) UIScrollView *lastTouchedScrollView;

- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)beginAfterExceedingForceThresholdIfNeeded:(id)a0;
- (id)initWithImageAnalysisGestureDelegate:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
