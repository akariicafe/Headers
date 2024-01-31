@class NSString, NSNumber;

@interface ICASSmartFoldersItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithTagsFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithDateCreatedFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithDateModifiedFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithSharedFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithMentionsFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithChecklistsFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithAttachmentsFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithFoldersFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithQuickNotesFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithPinnedNotesFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithLockedNotesFilter;
@property (readonly, nonatomic) NSNumber *totalCountOfSmartFoldersWithUnknownFilter;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfSmartFoldersWithTagsFilter:(id)a0 totalCountOfSmartFoldersWithDateCreatedFilter:(id)a1 totalCountOfSmartFoldersWithDateModifiedFilter:(id)a2 totalCountOfSmartFoldersWithSharedFilter:(id)a3 totalCountOfSmartFoldersWithMentionsFilter:(id)a4 totalCountOfSmartFoldersWithChecklistsFilter:(id)a5 totalCountOfSmartFoldersWithAttachmentsFilter:(id)a6 totalCountOfSmartFoldersWithFoldersFilter:(id)a7 totalCountOfSmartFoldersWithQuickNotesFilter:(id)a8 totalCountOfSmartFoldersWithPinnedNotesFilter:(id)a9 totalCountOfSmartFoldersWithLockedNotesFilter:(id)a10 totalCountOfSmartFoldersWithUnknownFilter:(id)a11;

@end
