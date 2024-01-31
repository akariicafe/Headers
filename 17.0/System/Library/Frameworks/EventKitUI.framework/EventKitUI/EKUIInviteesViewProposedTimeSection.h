@class EKEvent, NSString, NSArray, NSMutableSet, EKInviteeAlternativeTimeSearcher, NSMutableOrderedSet;

@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>

@property (weak, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *busyParticipants;
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic) BOOL conflictFound;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (copy, nonatomic) id /* block */ newTimeChosen;
@property (copy, nonatomic) id /* block */ showPreviewOfEventAtTime;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (retain, nonatomic) NSMutableOrderedSet *proposedTimes;
@property (retain, nonatomic) NSArray *proposedTimeResults;
@property (nonatomic) long long checkedRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (id)init;
- (id)headerTitle;
- (void)updateWithEvent:(id)a0;
- (id)debugTitle;
- (void).cxx_destruct;
- (BOOL)isRowChecked:(long long)a0;
- (void)cancelOutstandingOperations;
- (void)setChecked:(long long)a0;
- (BOOL)_isValidRow:(long long)a0;
- (id)actionsForRow:(id)a0;
- (void)availabilitySearcherChangedState:(long long)a0;
- (id)busyParticipantsForDate:(id)a0;
- (BOOL)canEditRow:(id)a0;
- (BOOL)canSelectRow:(id)a0;
- (id)cellForIndexPath:(id)a0 inTableView:(id)a1;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)a0 forRow:(id)a1;
- (id)contextMenuDataForIndexPath:(id)a0 interaction:(id)a1;
- (long long)editingStyleForRow:(id)a0;
- (double)estimatedHeightForRow:(id)a0;
- (BOOL)injectNewRowsBeforeLastExistingRow;
- (id)namesForParticipantsProposingDate:(id)a0;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)a0;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)a0;
- (BOOL)supportsContextMenuForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationButtonForRow:(id)a0;

@end
