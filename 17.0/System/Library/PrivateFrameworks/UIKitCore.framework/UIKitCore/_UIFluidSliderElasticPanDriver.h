@class NSString;

@interface _UIFluidSliderElasticPanDriver : NSObject <UIGestureRecognizerDelegate, _UIFluidSliderDirectDriving> {
    void /* unknown type, empty encoding */ animatedValue;
    void /* unknown type, empty encoding */ initialValue;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ initialStretchAmount;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ drivable;
@property (nonatomic, retain) void /* unknown type, empty encoding */ panGestureRecognizer;
@property (nonatomic) void /* unknown type, empty encoding */ trackAxis;
@property (nonatomic) void /* unknown type, empty encoding */ stretchAmount;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, weak) void /* unknown type, empty encoding */ view;
@property (nonatomic) void /* unknown type, empty encoding */ enabled;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)init;
- (void)handleGesture:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)cancel;

@end
