@interface _ICNAFolderReportToAccount : NSObject {
    int _folderCollaborationMatrix[3][3];
}

@property (nonatomic) unsigned long long countOfFolders;
@property (nonatomic) unsigned long long countOfCustomSmartFolders;
@property (nonatomic) unsigned long long countOfSmartFoldersWithTagsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithDateCreatedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithDateModifiedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithSharedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithMentionsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithChecklistsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithAttachmentsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithFoldersFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithQuickNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithPinnedNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithLockedNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithUnknownFilter;

- (id)init;
- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)a0 collaborationType:(long long)a1;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)a0 collaborationType:(id)a1;

@end
