@class QLPXChangeDirectionNumberFilter, QLPXInitialHysteresisNumberFilter;

@interface QLPXSwipeDownTracker : NSObject {
    BOOL _didStartTracking;
    struct CGPoint { double x; double y; } _initialTouchLocation;
    struct CGPoint { double x; double y; } _initialCenter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialBounds;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransform;
}

@property (nonatomic) struct CGPoint { double x; double y; } trackedCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackedBounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } trackedTransform;
@property (nonatomic) struct QLPXDisplayVelocity { double x; double y; double scale; double rotation; } trackedVelocity;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) BOOL shouldFinishDismissal;
@property (retain, nonatomic) QLPXChangeDirectionNumberFilter *verticalDirectionFilter;
@property (retain, nonatomic) QLPXInitialHysteresisNumberFilter *horizontalTranslationFilter;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) double finalAnimationDuration;
@property (readonly, nonatomic) double finalAnimationSpringDamping;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)trackGestureTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)startTrackingCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 withInitialGestureLocation:(struct CGPoint { double x0; double x1; })a3;

@end
