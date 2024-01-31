@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject

@property (retain) NSHashTable *observers;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)notifyOfChangeAtColumnID:(id)a0 rowID:(id)a1 delta:(long long)a2;

@end
