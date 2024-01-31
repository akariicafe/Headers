@class SCWDatabase, NSHashTable, SCWStartupQueue, NSObject;
@protocol SCWWatchlistMetadataProviding, OS_dispatch_queue, SCWWatchlistDefaultsProviding;

@interface SCWWatchlistManager : NSObject <SCWDatabaseObserver>

@property (retain, nonatomic) SCWDatabase *database;
@property (retain, nonatomic) id<SCWWatchlistMetadataProviding> metadataProvider;
@property (retain, nonatomic) id<SCWWatchlistDefaultsProviding> defaultsProvider;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SCWStartupQueue *startupQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)supportedCommands;
+ (id)zoneMergeHandler;
+ (id)zoneSchema;

- (id)initWithDatabase:(id)a0 metadataProvider:(id)a1 defaults:(id)a2;
- (void)removeWatchlist:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllWatchlistsWithCompletion:(id /* block */)a0;
- (void)removeStock:(id)a0 completion:(id /* block */)a1;
- (void)reorderSymbol:(id)a0 afterSymbol:(id)a1 watchlist:(id)a2 completion:(id /* block */)a3;
- (id)_sortedStocks:(id)a0 withSymbolOrder:(id)a1;
- (void)removeObserver:(id)a0;
- (void)removeSymbol:(id)a0 completion:(id /* block */)a1;
- (void)sc_synchronize;
- (void)renameWatchlist:(id)a0 newName:(id)a1 completion:(id /* block */)a2;
- (void)legacyWatchlistSortState:(id /* block */)a0;
- (void)fetchWatchlistOrderWithCompletion:(id /* block */)a0;
- (void)fetchStocksFromWatchlist:(id)a0 completion:(id /* block */)a1;
- (void)reorderSymbol:(id)a0 afterSymbol:(id)a1 completion:(id /* block */)a2;
- (void)reorderWatchlist:(id)a0 afterWatchlist:(id)a1 completion:(id /* block */)a2;
- (id)initWithDatabase:(id)a0 metadataProvider:(id)a1 defaultsProvider:(id)a2;
- (void)removeSymbol:(id)a0 watchlist:(id)a1 completion:(id /* block */)a2;
- (void)addStock:(id)a0 completion:(id /* block */)a1;
- (void)updateDisplayState:(id)a0 watchlist:(id)a1 completion:(id /* block */)a2;
- (void)reorderStock:(id)a0 toIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reorderSymbols:(id)a0 watchlist:(id)a1 completion:(id /* block */)a2;
- (void)addWatchlistToWatchlistOrder:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)replaceSymbol:(id)a0 withSymbol:(id)a1 watchlist:(id)a2 completion:(id /* block */)a3;
- (void)_enqueueStartupSequence;
- (void)database:(id)a0 didChangeZone:(id)a1 from:(id)a2 to:(id)a3;
- (void)fetchStocksWithCompletion:(id /* block */)a0;
- (void)synchronize;
- (void)removeWatchlistFromWatchlistOrder:(id)a0 completion:(id /* block */)a1;
- (void)addStock:(id)a0 watchlist:(id)a1 completion:(id /* block */)a2;
- (void)addWatchlist:(id)a0 identifier:(id)a1 sortState:(id)a2 sortOrderState:(id)a3 displayState:(id)a4 completion:(id /* block */)a5;
- (void)addObserver:(id)a0;
- (void)migrateToDefaultWatchlist:(id)a0 sortState:(id)a1 sortOrderState:(id)a2 displayState:(id)a3 completion:(id /* block */)a4;
- (void)updateSortState:(id)a0 newSortOrderState:(id)a1 watchlist:(id)a2 completion:(id /* block */)a3;
- (void)replaceSymbol:(id)a0 withSymbol:(id)a1 completion:(id /* block */)a2;

@end
