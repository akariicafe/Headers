@interface PLPersistentHistoryUtilities : NSObject

+ (id)unarchiveTokenWithData:(id)a0;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:(id)a0 error:(id *)a1;
+ (id)newestTransactionWithContext:(id)a0;
+ (BOOL)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1 withContext:(id)a2 error:(id *)a3;
+ (id)fetchTransactionsSinceMarker:(id)a0 withFetchRequest:(id)a1 batchSize:(unsigned long long)a2 context:(id)a3 error:(id *)a4;
+ (id)_executePersistentHistoryChangeRequest:(id)a0 withContext:(id)a1;
+ (id)oldestTransactionWithContext:(id)a0;
+ (BOOL)deleteHistoryBeforeToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (BOOL)deleteHistoryBeforeDate:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)fetchTransactionCountSinceToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)archivedDataWithToken:(id)a0;

@end
