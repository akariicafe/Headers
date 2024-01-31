@class NSString, UIView, UIPanGestureRecognizer;
@protocol _UIFluidSliderDrivable, _UIFluidSliderDirectDrivingDelegate;

@interface _UIFluidSliderInelasticPanDriver : NSObject <UIGestureRecognizerDelegate, _UIFluidSliderDirectDriving>

@property (nonatomic) double _initialValue;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIFluidSliderDirectDrivingDelegate> delegate;
@property (weak, nonatomic) id<_UIFluidSliderDrivable> drivable;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) double stretchAmount;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)cancel;
- (void)_issueUpdateWithValue:(double)a0 isActive:(BOOL)a1;
- (void)_handleGesture:(id)a0;
- (double)_trackLength;

@end
