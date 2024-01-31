@class NSString, NSOrderedSet, NSData, WFWorkflowIcon;

@interface WFWorkflowCollectionRecord : WFRecord

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) long long wantedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *collectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *shortcutOrdering;
@property (copy, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (copy, nonatomic) NSData *cloudKitOrderingRecordMetadata;

- (void).cxx_destruct;
- (long long)computedSyncHash;
- (BOOL)saveChangesToStorage:(id)a0 error:(id *)a1;

@end
