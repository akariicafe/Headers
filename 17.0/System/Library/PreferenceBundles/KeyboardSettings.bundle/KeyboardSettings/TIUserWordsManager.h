@class NSArray, NSMutableArray, _KSTextReplacementClientStore;

@interface TIUserWordsManager : NSObject {
    _KSTextReplacementClientStore *_textReplacementStore;
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSArray *cache;
@property (readonly, retain, nonatomic) NSArray *entries;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)requestSync;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)addObserver:(id /* block */)a0;
- (void)notifyObserversOfChange;

@end
