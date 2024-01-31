@class EKEvent, NSMutableArray, NSString;

@interface EKUIInviteesViewInvisibleInviteeStatusSection : NSObject <EKUIInviteesViewSection>

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) id /* block */ tableViewCellHook;
@property (nonatomic) BOOL editable;
@property (copy, nonatomic) id /* block */ participantTapped;
@property (copy, nonatomic) id /* block */ participantRemoved;
@property (copy, nonatomic) id /* block */ participantSetRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (id)debugTitle;
- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (BOOL)_isValidRow:(long long)a0;
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
- (void)updateWithEvent:(id)a0 editable:(BOOL)a1 fromDetail:(BOOL)a2;

@end
