@class NSArray, NSString, _UISimplePressGestureRecognizer, UIView, UIGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

@interface _UIPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving>

@property (class, readonly, nonatomic) BOOL requiresForceCapability;
@property (class, readonly, nonatomic) BOOL prefersCancelsTouchesInView;

@property (retain, nonatomic) _UISimplePressGestureRecognizer *pressGR;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIClickInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double allowableMovement;
@property (nonatomic) BOOL cancelsTouchesInView;
@property (readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly, nonatomic) double touchDuration;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (readonly, nonatomic) BOOL isCurrentlyAcceleratedByForce;
@property (readonly, nonatomic) BOOL clicksUpAutomaticallyAfterTimeout;
@property (readonly, nonatomic) double maximumEffectProgress;
@property (readonly, nonatomic) unsigned long long inputPrecision;
@property (nonatomic) unsigned long long driverStyle;
@property (nonatomic) unsigned long long behavior;

- (void)_gestureRecognizerFailed:(id)a0;
- (id)init;
- (void)_handlePressGesture:(id)a0;
- (void)cancelInteraction;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)_addToView:(id)a0;
- (void)_removeFromView;

@end
