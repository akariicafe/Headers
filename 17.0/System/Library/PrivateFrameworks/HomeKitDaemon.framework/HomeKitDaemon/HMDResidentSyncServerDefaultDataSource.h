@class NSString;

@interface HMDResidentSyncServerDefaultDataSource : NSObject <HMDResidentSyncServerDataSource>

@property (readonly) long long maximumTransactionsForSparseUpdate;
@property (readonly) long long maximumTransactionsForStoreChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
