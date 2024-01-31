@interface IMDMessageAutomaticHistoryDeletion : NSObject

+ (id)_getDirSubDirURLsForDirPath:(id)a0 error:(id *)a1;
+ (id)_getFilePathNotDSStore:(id)a0;
+ (id)_getPathAttributesForPath:(id)a0;
+ (id)_getiChatFileMetadataForPath:(id)a0;
+ (void)cleanDatabase;
+ (void)cleanUpOrphanAttachments;
+ (void)deleteAttachmentsAfterDays:(id)a0;
+ (void)deleteDirectoryAtPath:(id)a0;
+ (void)deleteJunkMessagesEligibleForPermanentRemovalOldThanDays:(long long)a0;
+ (void)deleteMessagesAfterDays:(id)a0;
+ (void)deleteMessagesAndAttachmentsAfterDays:(id)a0;
+ (void)deleteRecoverableMessagesEligibleForPermanentRemoval;
+ (void)deleteSpolightArchivedFiles;
+ (BOOL)isDirCreationDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isFileAtDirPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isFileHeaderDateAtPath:(id)a0 olderThanDays:(long long)a1;
+ (BOOL)isOlderThanDays:(long long)a0 fromDate:(id)a1;

@end
