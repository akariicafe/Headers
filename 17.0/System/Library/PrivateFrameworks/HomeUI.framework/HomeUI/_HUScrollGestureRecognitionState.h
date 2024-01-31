@class UIGestureRecognizer;
@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject

@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) id<NACancelable> activationTimer;

- (void).cxx_destruct;
- (id)initWithGestureRecognizer:(id)a0;

@end
