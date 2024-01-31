@class NSObject, NSHashTable, SCKDatabase, SCKStartupQueue;
@protocol OS_dispatch_queue, SCWatchlistDefaultsProviding, SCWatchlistMetadataProviding;

@interface SCWatchlist : NSObject <SCKDatabaseObserver>

@property (retain, nonatomic) SCKDatabase *database;
@property (retain, nonatomic) id<SCWatchlistMetadataProviding> metadataProvider;
@property (retain, nonatomic) id<SCWatchlistDefaultsProviding> defaultsProvider;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SCKStartupQueue *startupQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)supportedCommands;
+ (id)zoneMergeHandler;
+ (id)zoneSchema;

- (id)initWithDatabase:(id)a0 metadataProvider:(id)a1 defaults:(id)a2;
- (void)removeStock:(id)a0 completion:(id /* block */)a1;
- (id)_sortedStocks:(id)a0 withSymbolOrder:(id)a1;
- (void)removeObserver:(id)a0;
- (void)removeSymbol:(id)a0 completion:(id /* block */)a1;
- (void)reorderSymbol:(id)a0 afterSymbol:(id)a1 completion:(id /* block */)a2;
- (id)initWithDatabase:(id)a0 metadataProvider:(id)a1 defaultsProvider:(id)a2;
- (void)addStock:(id)a0 completion:(id /* block */)a1;
- (void)reorderStock:(id)a0 toIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_enqueueStartupSequence;
- (void)database:(id)a0 didChangeZone:(id)a1 from:(id)a2 to:(id)a3;
- (void)fetchStocksWithCompletion:(id /* block */)a0;
- (void)synchronize;
- (void)addObserver:(id)a0;
- (void)replaceSymbol:(id)a0 withSymbol:(id)a1 completion:(id /* block */)a2;

@end
