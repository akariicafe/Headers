@interface SearchUICreateContactHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)contactFromCommand;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (BOOL)prefersContextMenu;
- (BOOL)prefersModalPresentation;

@end
