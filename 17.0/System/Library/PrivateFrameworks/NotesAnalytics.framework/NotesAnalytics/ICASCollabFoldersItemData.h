@class NSString, NSNumber;

@interface ICASCollabFoldersItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootReadOnlyCount;
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderReadOnlyCount;
@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootReadWriteJoinedCount;
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderReadWriteJoinedCount;
@property (readonly, nonatomic) NSNumber *totalFoldersNotCollabCount;
@property (readonly, nonatomic) NSNumber *totalFoldersCollabRootOwnedCount;
@property (readonly, nonatomic) NSNumber *totalFoldersCollabSubfolderOwnedCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalFoldersCollabRootReadOnlyCount:(id)a0 totalFoldersCollabSubfolderReadOnlyCount:(id)a1 totalFoldersCollabRootReadWriteJoinedCount:(id)a2 totalFoldersCollabSubfolderReadWriteJoinedCount:(id)a3 totalFoldersNotCollabCount:(id)a4 totalFoldersCollabRootOwnedCount:(id)a5 totalFoldersCollabSubfolderOwnedCount:(id)a6;

@end
