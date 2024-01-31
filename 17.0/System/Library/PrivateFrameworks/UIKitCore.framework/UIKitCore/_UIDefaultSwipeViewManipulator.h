@class NSString;

@interface _UIDefaultSwipeViewManipulator : NSObject <_UISwipeViewManipulator>

@property (nonatomic) double swipedViewRestingOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moveSwipedView:(id)a0 atIndexPath:(id)a1 withSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })a2 animator:(id)a3;
- (void)removeAnimationsFromSwipedView:(id)a0 atIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })restingFrameForSwipedView:(id)a0 atIndexPath:(id)a1;

@end
