@interface FAFamilyMessageGroup : IAMMessageGroup

- (id)groupIdentifier;
- (void)performModalMessagePresentation:(id)a0 fromViewController:(id)a1;
- (id)contextPropertyWithName:(id)a0;
- (BOOL)shouldPerformModalMessagePresentation;

@end
