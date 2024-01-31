@interface SearchUICreateCalendarEventHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)eventFromSFCalendarEvent:(id)a0 eventStore:(id)a1;
- (BOOL)prefersContextMenu;
- (BOOL)prefersModalPresentation;

@end
