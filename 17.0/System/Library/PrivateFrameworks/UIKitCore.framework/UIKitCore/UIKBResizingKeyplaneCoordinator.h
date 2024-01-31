@class UIColor, NSString, _UIDynamicAnimationGroup, UIKBResizingKeyplanePanGestureRecognizer, UIView;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate, UIKBResizingKeyplanePanGestureRecognizerDelegate> {
    double _prevResizingOffset;
    double _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    BOOL _isResizing;
}

@property (readonly, nonatomic) UIKBResizingKeyplanePanGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate;
@property (readonly, nonatomic) double resizingOffset;
@property (readonly, nonatomic) BOOL isResizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)savedResizingOffset;

- (void)dimKeys:(id)a0;
- (id)init;
- (void)stopResizing;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setRenderConfig:(id)a0;
- (BOOL)shouldStartResizeForTranslationY:(double)a0;
- (void)uninstallGestureRecognizers;
- (void).cxx_destruct;
- (void)updateGestureRecognizers;
- (void)handleResizeGesture:(id)a0;
- (void)reloadResizingOffset;
- (void)updateGrabber;
- (void)resizeKeyplaneWithOffset:(double)a0 andRedraw:(BOOL)a1;
- (void)saveResizingStopIndex:(unsigned long long)a0;

@end
