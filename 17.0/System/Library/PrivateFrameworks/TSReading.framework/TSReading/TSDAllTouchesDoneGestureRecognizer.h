@class NSMutableSet;

@interface TSDAllTouchesDoneGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *mTouches;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)p_touchesEndedOrCancelled:(id)a0;

@end
