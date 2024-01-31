@class NSString, NSData, NSPersistentHistoryToken;

@interface BCCloudSyncVersions : NSManagedObject <BCCloudSyncVersions>

@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSData *rawHistoryToken;
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long cloudVersion;
@property (nonatomic) long long localVersion;
@property (nonatomic) long long syncVersion;

- (id)mutableCopy;
- (id)historyToken;
- (void)setHistoryToken:(id)a0;
- (void)configureFromSyncVersions:(id)a0;

@end
