@class NSString, _UITouchDownGestureRecognizer, UIView, UIGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

@interface _UITouchDownClickInteractionDriver : NSObject <_UIClickInteractionDriving, UIGestureRecognizerDelegate> {
    _UITouchDownGestureRecognizer *_gesture;
}

@property (class, readonly, nonatomic) BOOL requiresForceCapability;
@property (class, readonly, nonatomic) BOOL prefersCancelsTouchesInView;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
