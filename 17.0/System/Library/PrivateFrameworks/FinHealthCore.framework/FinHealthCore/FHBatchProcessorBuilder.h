@class NSDate, NSMutableSet, FHDatabaseManager;

@interface FHBatchProcessorBuilder : NSObject

@property (retain, nonatomic) NSMutableSet *internalStates;
@property (nonatomic) BOOL computeMerchantCounts;
@property (retain, nonatomic) FHDatabaseManager *databaseManager;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long mostRecentTransactionFromDatabase;

- (id)init;
- (void).cxx_destruct;
- (void)addInternalState:(unsigned long long)a0;
- (void)enableMerchantCounts;

@end
