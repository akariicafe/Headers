@class NSString, NSMutableSet, UIView;

@interface TSKHideOnTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    NSMutableSet *mTargets;
}

@property (nonatomic) UIView *watchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInFlight;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1 watchView:(id)a2;

@end
