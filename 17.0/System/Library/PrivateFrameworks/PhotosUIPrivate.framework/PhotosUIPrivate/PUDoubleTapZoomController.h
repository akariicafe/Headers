@class UITapGestureRecognizer, NSString;
@protocol PUDoubleTapZoomControllerDelegate;

@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate> {
    struct { BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToTilingView; BOOL respondsToDelegateForGestureRecognizer; BOOL respondsToCanDoubleTapBeginAtLocationFromProvider; } _delegateFlags;
}

@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer;
@property (weak, nonatomic) id<PUDoubleTapZoomControllerDelegate> delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_invalidateGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateGestureRecognizersIfNeeded;
- (id)_userTransformViewAtLocationFromProvider:(id)a0;
- (void).cxx_destruct;
- (void)_handleDoubleTapGestureRecognizer:(id)a0;
- (BOOL)shouldDoubleTapBeginAtLocationFromProvider:(id)a0;

@end
