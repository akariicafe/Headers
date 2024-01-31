@class ICAccount, NoteStoreObject, NSArray, NSMutableSet, NSMutableArray, ICVirtualSmartFolderItemIdentifier, ICCloudSyncingObject, ICFolder;

@interface ICMoveDecision : NSObject

@property (retain, nonatomic) NSMutableSet *filteredModernSourceObjects;
@property (retain, nonatomic) NSMutableArray *sanitizedFilteredModernSourceObjects;
@property (retain, nonatomic) NSMutableArray *ownedSharedRootObjectsInSource;
@property (retain, nonatomic) NSMutableArray *joinedSharedRootObjectsInSource;
@property (retain, nonatomic) NSMutableArray *readWriteSharedSubObjectsInSource;
@property (retain, nonatomic) NSMutableArray *readOnlySharedSubObjectsInSource;
@property (retain, nonatomic) NSMutableArray *lockedObjectsInSource;
@property (retain, nonatomic) NSMutableArray *unsupportedObjectsInSource;
@property (retain, nonatomic) NSArray *modernFoldersInSource;
@property (retain, nonatomic) NSMutableSet *accountsOfModernSourceObjects;
@property (retain, nonatomic) NSMutableSet *accountsOfHTMLSourceObjects;
@property (retain, nonatomic) NSMutableArray *privateModernNoteWithAttachmentsInSource;
@property (retain, nonatomic) NSMutableArray *sharedObjectsNotFromDestinationFolderInSource;
@property (retain, nonatomic) NSMutableArray *sharedObjectsInSource;
@property (retain, nonatomic) NSMutableArray *systemPaperNotesInSource;
@property (retain, nonatomic) NSMutableArray *nonSystemPaperNotesInSource;
@property (nonatomic) BOOL hasSharedObjectsNotFromDestinationAccountInSource;
@property (nonatomic) BOOL hasLockedNotesNotFromDestinationAccountInSource;
@property (nonatomic) BOOL hasSystemPaperNotesNotFromDestinationAccountInSource;
@property (nonatomic) BOOL hasTrashedSystemPaperNotesInSource;
@property (nonatomic) BOOL hasSanitizedAndScreenedModernSourceObjects;
@property (nonatomic) BOOL allowsManagedToUnmanagedMove;
@property (nonatomic) BOOL allowsUnmanagedToManagedMove;
@property (readonly, nonatomic) BOOL shouldContinueDecisionMaking;
@property (readonly, nonatomic) NSArray *modernSourceObjects;
@property (readonly, nonatomic) NSArray *htmlSourceObjects;
@property (readonly, nonatomic) ICCloudSyncingObject *modernDestination;
@property (readonly, nonatomic) NoteStoreObject *htmlDestinationFolder;
@property (readonly, nonatomic) ICVirtualSmartFolderItemIdentifier *virtualDestinationFolder;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long additionalStep;
@property (readonly, nonatomic) NSArray *guiltyObjects;
@property (readonly, nonatomic) BOOL shouldMove;
@property (readonly, nonatomic) BOOL shouldProceed;
@property (readonly, nonatomic) ICFolder *modernDestinationFolder;
@property (readonly, nonatomic) ICAccount *modernDestinationAccount;

+ (BOOL)isValidModernDestinationObject:(id)a0;
+ (BOOL)isValidHTMLDestinationObject:(id)a0;
+ (BOOL)isValidHTMLSourceObject:(id)a0;
+ (BOOL)isValidModernSourceObject:(id)a0;
+ (BOOL)isValidVirtualDestinationObject:(id)a0;
+ (id)objectsForMakingDecisionForNonSharedFolder:(id)a0;
+ (BOOL)shouldCopyThenDeleteWhenMovingObject:(id)a0 toNoteContainer:(id)a1;

- (id)typeString;
- (id)description;
- (void).cxx_destruct;
- (void)_makeDecisionForMovingBetweenManagedAndUnmanagedAccounts;
- (void)_makeDecisionForMovingHTMLObjectsToHTMLDestination;
- (void)_makeDecisionForMovingHTMLObjectsToModernDestination;
- (void)_makeDecisionForMovingHTMLObjectsToVirtualDestination;
- (void)_makeDecisionForMovingModernObjectsToHTMLDestination;
- (void)_makeDecisionForMovingModernObjectsToModernDestination;
- (void)_makeDecisionForMovingModernObjectsToVirtualDestination;
- (void)_sanitizeAndScreenFilteredModernSourceObjectsIfNecessary;
- (void)_setDecisionWithType:(unsigned long long)a0 additionalStep:(unsigned long long)a1 guiltyObjects:(id)a2;
- (void)_setDecisionWithType:(unsigned long long)a0 guiltyObjects:(id)a1;
- (id)accountForObject:(id)a0;
- (BOOL)hasLockedObjects;
- (id)htmlAccountForObject:(id)a0;
- (id)initWithSourceObjects:(id)a0 destination:(id)a1;
- (id)initWithSourceObjects:(id)a0 destination:(id)a1 allowsManagedToUnmanagedMove:(BOOL)a2 allowsUnmanagedToManagedMove:(BOOL)a3;

@end
