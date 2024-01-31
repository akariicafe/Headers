@class NSMutableDictionary, NSPersistentHistoryToken, NSArray, NSManagedObjectContext;

@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSArray *_transactions;
    unsigned long long _transactionIndex;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

+ (id)iteratorSinceMarker:(id)a0 withFetchRequest:(id)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;
+ (id)iteratorSinceToken:(id)a0 withManagedObjectObjectContext:(id)a1 error:(id *)a2;

- (BOOL)hasMoreTransactions;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)a0;
- (id)_safeTransactionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithTransactions:(id)a0 managedObjectObjectContext:(id)a1;
- (BOOL)enumerateOneTransactionWithBlock:(id /* block */)a0;

@end
