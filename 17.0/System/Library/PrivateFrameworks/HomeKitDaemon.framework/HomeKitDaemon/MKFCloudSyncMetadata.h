@class NSPersistentHistoryToken;

@interface MKFCloudSyncMetadata : HMDManagedObject

@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (nonatomic) BOOL unique;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (retain, nonatomic) NSPersistentHistoryToken *historyTokenForWorkingStore;

+ (id)fetchRequest;

- (void)willSave;

@end
