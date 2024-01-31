@interface UIInputViewSetPlacement_FloatingAssistantApplicatorForNonKeyboard : UIInputViewSetPlacement_FloatingAssistantApplicator

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAssistantPadding;
- (id)initForOwner:(id)a0 withPlacement:(id)a1;
- (BOOL)shouldApplyOriginChange;
- (void)invalidate;

@end
