@class SUUIClientContext, NSString, UIImage, SUUISlideshowImageScrollView, UIView;
@protocol SUUISlideshowItemViewControllerDelegate;

@interface SUUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
    struct CGPoint { double x; double y; } _lastContentOffset;
    double _lastZoomScale;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUISlideshowItemViewControllerDelegate> delegate;
@property (readonly, nonatomic) SUUISlideshowImageScrollView *imageScrollView;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic) long long indexInCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_gestureRecognizer:(id)a0 canBePreventedByGestureRecognizer:(id)a1;
- (void)dealloc;
- (BOOL)_gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)a0;

@end
