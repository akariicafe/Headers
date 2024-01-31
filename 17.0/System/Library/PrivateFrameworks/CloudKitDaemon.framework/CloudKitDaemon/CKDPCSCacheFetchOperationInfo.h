@class CKDPCSCache;
@protocol CKSQLiteItem;

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) id<CKSQLiteItem> itemID;
@property (retain, nonatomic) CKDPCSCache *cache;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;

@end
