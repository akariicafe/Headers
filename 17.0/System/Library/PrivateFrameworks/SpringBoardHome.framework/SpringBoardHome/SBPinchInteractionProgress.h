@class NSString, UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate> {
    struct { struct { double value; BOOL inclusive; } start; struct { double value; BOOL inclusive; } end; } _pinchInterval;
}

@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly, nonatomic) double minPinchScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
