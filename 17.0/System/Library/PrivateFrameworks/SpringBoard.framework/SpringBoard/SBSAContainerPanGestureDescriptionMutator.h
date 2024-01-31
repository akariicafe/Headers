@interface SBSAContainerPanGestureDescriptionMutator : SBSAGestureDescriptionMutator

@property (nonatomic) struct CGPoint { double x0; double x1; } initialLocation;
@property (nonatomic) struct CGPoint { double x0; double x1; } translation;

- (id)_containerPanGestureDescription;

@end
