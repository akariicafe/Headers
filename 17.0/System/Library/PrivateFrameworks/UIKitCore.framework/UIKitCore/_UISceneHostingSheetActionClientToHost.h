@interface _UISceneHostingSheetActionClientToHost : _UISceneHostingActionClientToHost

+ (id)actionForSheetGrabberDidTriggerPrimaryAction;
+ (id)actionForSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)a0 dismissible:(BOOL)a1 interruptedOffset:(struct CGPoint { double x0; double x1; })a2;
+ (id)actionForSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 animateChange:(BOOL)a2 dismissible:(BOOL)a3;
+ (id)actionForSheetInteractionDraggingDidEnd;

- (void)performActionForSceneController:(id)a0;

@end
