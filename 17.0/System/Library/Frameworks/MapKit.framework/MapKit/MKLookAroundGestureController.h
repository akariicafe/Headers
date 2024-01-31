@class MKLookAroundView, NSString, VKCompoundAnimation, UIPinchGestureRecognizer, NSDate, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol MKLookAroundGestureControllerDelegate;

@interface MKLookAroundGestureController : NSObject <UIGestureRecognizerDelegate> {
    long long _userInteractionCount;
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_zoomGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _lastZoomDirection;
    double _startZoomScale;
    double _lastZoomScale;
    BOOL _readyToReplayTap;
}

@property (weak, nonatomic) MKLookAroundView *lookAroundView;
@property (weak, nonatomic) id<MKLookAroundGestureControllerDelegate> delegate;
@property (nonatomic) BOOL navigatingEnabled;
@property (nonatomic) BOOL panningEnabled;
@property (nonatomic) BOOL zoomingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleSingleNavigate:(id)a0;
- (void)_handleZoom:(id)a0;
- (void)_moveBackToReplayTap;
- (id)initWithLookAroundView:(id)a0;

@end
