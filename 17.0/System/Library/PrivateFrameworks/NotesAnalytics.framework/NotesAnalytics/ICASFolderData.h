@class NSNumber, NSString, ICASCollaborationType, ICASCollaborationStatus, ICASFolderType, ICASFolderLabelType;

@interface ICASFolderData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *folderID;
@property (readonly, nonatomic) ICASFolderType *folderType;
@property (readonly, nonatomic) ICASFolderLabelType *folderLabelType;
@property (readonly, nonatomic) NSNumber *subFolderLevel;
@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus;
@property (readonly, nonatomic) ICASCollaborationType *collaborationType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFolderID:(id)a0 folderType:(id)a1 folderLabelType:(id)a2 subFolderLevel:(id)a3 collaborationStatus:(id)a4 collaborationType:(id)a5;

@end
