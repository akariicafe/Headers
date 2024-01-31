@interface UITextItemInteractionInteraction : UITextInteraction

+ (BOOL)mightResponder:(id)a0 haveInteractableTextItemAtPoint:(struct CGPoint { double x0; double x1; })a1 precision:(unsigned long long)a2;
+ (BOOL)mightResponderHaveTextItemInteractions:(id)a0;

- (BOOL)_allowItemInteractions;

@end
