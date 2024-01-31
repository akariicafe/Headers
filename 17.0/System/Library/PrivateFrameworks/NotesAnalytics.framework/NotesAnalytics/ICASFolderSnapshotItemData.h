@class ICASFolderType, NSString, ICASFolderLabelType, ICASCollaborationStatus, ICASCollaborationType, NSNumber;

@interface ICASFolderSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *folderID;
@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus;
@property (readonly, nonatomic) ICASCollaborationType *collaborationType;
@property (readonly, nonatomic) NSNumber *countOfInvitees;
@property (readonly, nonatomic) NSNumber *countOfAcceptances;
@property (readonly, nonatomic) NSNumber *directNoteCount;
@property (readonly, nonatomic) NSNumber *totalNoteCount;
@property (readonly, nonatomic) ICASFolderType *folderType;
@property (readonly, nonatomic) ICASFolderLabelType *folderLabelType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFolderID:(id)a0 collaborationStatus:(id)a1 collaborationType:(id)a2 countOfInvitees:(id)a3 countOfAcceptances:(id)a4 directNoteCount:(id)a5 totalNoteCount:(id)a6 folderType:(id)a7 folderLabelType:(id)a8;

@end
