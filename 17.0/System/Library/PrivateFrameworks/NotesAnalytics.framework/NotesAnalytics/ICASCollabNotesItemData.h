@class NSString, NSNumber;

@interface ICASCollabNotesItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalNotesCollabRootReadOnlyCount;
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderReadOnlyCount;
@property (readonly, nonatomic) NSNumber *totalNotesCollabRootReadWriteJoinedCount;
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderReadWriteJoinedCount;
@property (readonly, nonatomic) NSNumber *totalNotesNotCollabCount;
@property (readonly, nonatomic) NSNumber *totalNotesCollabRootOwnedCount;
@property (readonly, nonatomic) NSNumber *totalNotesCollabThruFolderOwnedCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalNotesCollabRootReadOnlyCount:(id)a0 totalNotesCollabThruFolderReadOnlyCount:(id)a1 totalNotesCollabRootReadWriteJoinedCount:(id)a2 totalNotesCollabThruFolderReadWriteJoinedCount:(id)a3 totalNotesNotCollabCount:(id)a4 totalNotesCollabRootOwnedCount:(id)a5 totalNotesCollabThruFolderOwnedCount:(id)a6;

@end
