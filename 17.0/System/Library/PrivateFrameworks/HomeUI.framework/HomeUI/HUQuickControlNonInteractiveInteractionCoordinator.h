@interface HUQuickControlNonInteractiveInteractionCoordinator : HUQuickControlInteractionCoordinator

- (id)init;
- (id)value;
- (void)setValue:(id)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (BOOL)isUserInteractionActive;

@end
