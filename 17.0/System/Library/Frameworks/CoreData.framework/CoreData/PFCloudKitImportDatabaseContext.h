@class CKServerChangeToken, NSMutableSet;

@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet *_changedRecordZoneIDs;
    NSMutableSet *_deletedRecordZoneIDs;
    NSMutableSet *_purgedRecordZoneIDs;
    NSMutableSet *_userResetEncryptedDataZoneIDs;
    CKServerChangeToken *_updatedChangeToken;
}

- (id)init;
- (void)dealloc;
- (id)description;

@end
