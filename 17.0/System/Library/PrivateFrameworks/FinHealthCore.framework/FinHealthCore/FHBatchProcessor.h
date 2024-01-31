@class NSDate, NSString, NSArray, NSPredicate, NSSet, FHDatabaseManager, NSMutableArray, NSDecimalNumber;

@interface FHBatchProcessor : NSObject <FHFetchAllTransactionsDelegate> {
    NSMutableArray *_merchantWithTimeStampPairs;
    NSMutableArray *_indexedAmountArray;
    NSMutableArray *_resultArray;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDecimalNumber *_secondsInDay;
    NSPredicate *_predicates;
    BOOL _computeMerchantCounts;
}

@property (readonly, weak, nonatomic) FHDatabaseManager *databaseManager;
@property (readonly, nonatomic) NSSet *merchantsWithSignificantCount;
@property (readonly, nonatomic) NSArray *filteredTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithBuilder:(id /* block */)a0;

@end
