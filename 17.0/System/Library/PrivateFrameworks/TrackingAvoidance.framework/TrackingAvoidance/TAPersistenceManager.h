@class TAPersistenceManagerSettings, TAPersistenceStore, NSHashTable;

@interface TAPersistenceManager : NSObject

@property (retain) TAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TAPersistenceStore *store;

- (BOOL)load;
- (BOOL)reset;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (BOOL)save;
- (void).cxx_destruct;
- (BOOL)_createDirectoryIfNotPresent;
- (id)initWithSettings:(id)a0;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (void)onUpdatedTAStore:(id)a0;
- (void)addObserver:(id)a0;

@end
