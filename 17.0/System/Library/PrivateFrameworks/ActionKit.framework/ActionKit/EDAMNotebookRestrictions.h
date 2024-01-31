@class NSNumber;

@interface EDAMNotebookRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noReadNotes;
@property (retain, nonatomic) NSNumber *noCreateNotes;
@property (retain, nonatomic) NSNumber *noUpdateNotes;
@property (retain, nonatomic) NSNumber *noExpungeNotes;
@property (retain, nonatomic) NSNumber *noShareNotes;
@property (retain, nonatomic) NSNumber *noEmailNotes;
@property (retain, nonatomic) NSNumber *noSendMessageToRecipients;
@property (retain, nonatomic) NSNumber *noUpdateNotebook;
@property (retain, nonatomic) NSNumber *noExpungeNotebook;
@property (retain, nonatomic) NSNumber *noSetDefaultNotebook;
@property (retain, nonatomic) NSNumber *noSetNotebookStack;
@property (retain, nonatomic) NSNumber *noPublishToPublic;
@property (retain, nonatomic) NSNumber *noPublishToBusinessLibrary;
@property (retain, nonatomic) NSNumber *noCreateTags;
@property (retain, nonatomic) NSNumber *noUpdateTags;
@property (retain, nonatomic) NSNumber *noExpungeTags;
@property (retain, nonatomic) NSNumber *noSetParentTag;
@property (retain, nonatomic) NSNumber *noCreateSharedNotebooks;
@property (retain, nonatomic) NSNumber *updateWhichSharedNotebookRestrictions;
@property (retain, nonatomic) NSNumber *expungeWhichSharedNotebookRestrictions;
@property (retain, nonatomic) NSNumber *noShareNotesWithBusiness;
@property (retain, nonatomic) NSNumber *noRenameNotebook;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
