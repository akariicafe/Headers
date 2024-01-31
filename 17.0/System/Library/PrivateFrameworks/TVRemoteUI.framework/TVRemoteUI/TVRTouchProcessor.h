@class TVRTouchpadView, NSMutableSet, NSMapTable;
@protocol TVRTouchProcessorDelegate;

@interface TVRTouchProcessor : NSObject {
    NSMutableSet *_activeButtonTypes;
    NSMapTable *_touches;
}

@property (retain, nonatomic) TVRTouchpadView *touchpadView;
@property (weak, nonatomic) id<TVRTouchProcessorDelegate> delegate;

+ (id)touchProcessorForDevice:(id)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)_init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)sendPressEnded:(long long)a0;
- (void)sendPressBegan:(long long)a0;
- (void)_beginTrackingAnyTouchIfNeeded;
- (void)_beginTrackingTouch:(id)a0 withRelativeLocation:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForTouch:(id)a0 relativeStartLocation:(long long)a1;
- (long long)_defaultRelativeStartingLocation;
- (void)_deliverTouchToDelegate:(id)a0 info:(id)a1;
- (BOOL)_deviceSupportsMovableBoundingBox;
- (void)_dispatchGameControllerEventForTouch:(id)a0 event:(id)a1;
- (long long)_relativeTouchLocationForDistanceTraveled:(struct CGPoint { double x0; double x1; })a0;
- (void)_touchTimerExpired:(id)a0;
- (struct CGPoint { double x0; double x1; })_virtualTouchLocationForTouch:(id)a0;
- (void)markCurrentTouchToBeCancelled;

@end
