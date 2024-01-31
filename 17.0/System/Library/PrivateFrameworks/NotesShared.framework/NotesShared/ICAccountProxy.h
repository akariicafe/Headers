@class NSString, NSArray, NSData, ICAccount, ICFolderCustomNoteSortType, NSManagedObjectContext;

@interface ICAccountProxy : NSObject <ICNoteContainer>

@property (retain) ICAccount *account;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) int dateHeadersType;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) unsigned long long visibleNotesCount;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountProxyWithAccount:(id)a0;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (id)objectID;
- (id)initWithAccount:(id)a0;
- (BOOL)noteIsVisible:(id)a0;
- (long long)compare:(id)a0;
- (void)saveSubFolderMergeableDataIfNeeded;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (id)customNoteSortTypeValue;
- (id)predicateForSearchableAttachments;
- (void)updateSubFolderMergeableDataChangeCount;
- (void).cxx_destruct;
- (id)noteVisibilityTestingForSearchingAccount;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (void)applyDateHeadersType:(int)a0;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableNotes;
- (BOOL)isLeaf;
- (id)visibleNoteContainerChildren;

@end
