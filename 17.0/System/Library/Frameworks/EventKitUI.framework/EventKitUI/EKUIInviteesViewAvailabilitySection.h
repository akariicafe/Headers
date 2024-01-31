@class EKEvent, NSString;

@interface EKUIInviteesViewAvailabilitySection : NSObject <EKUIInviteesViewSection>

@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL checked;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (retain, nonatomic) NSString *cachedAvailabilityCellReuseIdentifier;
@property (retain, nonatomic) NSString *cachedConflictCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic) BOOL isForAttendeeProposedTime;
@property (copy, nonatomic) id /* block */ viewAvailabilityTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (void)updateWithEvent:(id)a0;
- (id)debugTitle;
- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (id)actionsForRow:(id)a0;
- (BOOL)canEditRow:(id)a0;
- (BOOL)canSelectRow:(id)a0;
- (id)cellForIndexPath:(id)a0 inTableView:(id)a1;
- (void)commitEditingStyle:(long long)a0 forRow:(id)a1;
- (id)contextMenuDataForIndexPath:(id)a0 interaction:(id)a1;
- (long long)editingStyleForRow:(id)a0;
- (double)estimatedHeightForRow:(id)a0;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)a0;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)a0;
- (BOOL)supportsContextMenuForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationButtonForRow:(id)a0;

@end
