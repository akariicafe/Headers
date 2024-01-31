@interface EKUIContextMenuActions : NSObject

+ (id)_allActionInfos;
+ (void)_acceptProposedTimeForEvent:(id)a0 presentationController:(id)a1;
+ (BOOL)_canEmailOrganizerForEvent:(id)a0;
+ (id)_createCalendarsMenuForEvents:(id)a0 presentationController:(id)a1 isEditMenu:(BOOL)a2 overrideActionBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (id)_filteredSortedActionInfosForEvents:(id)a0 presentationController:(id)a1 isEditMenu:(BOOL)a2;
+ (long long)_menuStateForStatus:(long long)a0 events:(id)a1;
+ (id)_organizerContactForEvent:(id)a0;
+ (void)_performSaveWithEvent:(id)a0 span:(long long)a1 editor:(id)a2;
+ (void)_presentMailViewControllerSendingToOrganizer:(BOOL)a0 event:(id)a1 presentationController:(id)a2;
+ (id)_proposedDateForEvent:(id)a0;
+ (void)_saveStatus:(long long)a0 forEvent:(id)a1 presentationController:(id)a2;
+ (void)deleteEvents:(id)a0 presentationController:(id)a1;
+ (BOOL)eventsAllDeletable:(id)a0;
+ (id)menuForEvents:(id)a0 presentationController:(id)a1 isEditMenu:(BOOL)a2 overrideActionBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (long long)statusButtonsActionFromContextMenuAction:(unsigned long long)a0;

@end
