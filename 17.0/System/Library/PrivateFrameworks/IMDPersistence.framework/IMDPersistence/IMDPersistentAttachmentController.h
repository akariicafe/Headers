@interface IMDPersistentAttachmentController : NSObject

+ (id)sharedInstance;

- (BOOL)_canDeleteAttachmentPath:(id)a0;
- (BOOL)_deleteAttachmentForTransfer:(id)a0 highQuality:(BOOL)a1;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)a0 destinationPath:(id)a1 withFileManager:(id)a2;
- (id)_persistentPathForTransfer:(id)a0 filename:(id)a1 highQuality:(BOOL)a2 chatGUID:(id)a3 storeAtExternalPath:(BOOL)a4;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)a0 withFileManager:(id)a1;
- (id)_saveAttachmentForTransfer:(id)a0 highQuality:(BOOL)a1 copyWithinAttachmentStore:(BOOL)a2;
- (id)_saveAttachmentForTransfer:(id)a0 highQuality:(BOOL)a1 copyWithinAttachmentStore:(BOOL)a2 chatGUID:(id)a3 storeAtExternalPath:(BOOL)a4;
- (BOOL)_shouldDeleteOriginalPath:(id)a0 copyWithinAttachmentStore:(BOOL)a1 destPath:(id)a2 storeAtExternalPath:(BOOL)a3;
- (BOOL)cleanseOrphanedFileTransfers;
- (BOOL)deleteAttachmentsForTransfer:(id)a0;
- (BOOL)isSafeToDeleteAttachmentPath:(id)a0;
- (void)moveAttachmentsForTransfer:(id)a0 completion:(id /* block */)a1;
- (void)saveAttachmentsForTransfer:(id)a0 chatGUID:(id)a1 storeAtExternalLocation:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveAttachmentsForTransfer:(id)a0 completion:(id /* block */)a1;

@end
