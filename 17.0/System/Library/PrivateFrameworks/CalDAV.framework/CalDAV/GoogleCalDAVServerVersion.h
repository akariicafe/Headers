@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)supportedCalendarComponentSets;
- (id)init;
- (BOOL)requiresOpeningAttachmentAsLink;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)type;

@end
