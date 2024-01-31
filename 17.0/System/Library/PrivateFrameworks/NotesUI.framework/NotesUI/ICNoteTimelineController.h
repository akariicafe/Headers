@interface ICNoteTimelineController : NSObject

+ (void)setTimeZone:(id)a0;
+ (id)timelineSectionsForNoteObjectIDs:(id)a0 dates:(id)a1 referenceDate:(id)a2 direction:(long long)a3;
+ (id)adjustedDateForReferenceDate:(id)a0;
+ (id)invitationsTimelineSectionIdentifierWithTitle:(id)a0 referenceDate:(id)a1;
+ (id)pinnedTimelineSectionIdentifierWithTitle:(id)a0 referenceDate:(id)a1;
+ (id)sanitizedDatesForDates:(id)a0 referenceDate:(id)a1;
+ (id)timelineSectionIdentifierForNoteObjectID:(id)a0 date:(id)a1 referenceDate:(id)a2;
+ (id)timelineSectionIdentifierForNoteObjectID:(id)a0 date:(id)a1 sectionIdentifiersToManagedObjectIDs:(id)a2;

@end
