@class NSMutableDictionary, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSPersistentPropertyListStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_store;
    WBSCoalescedAsynchronousWriter *_writer;
}

@property (copy, nonatomic) id /* block */ createEmptyStoreHandler;
@property (copy, nonatomic) id /* block */ validateLoadedStoreHandler;

- (void)saveAndCloseStoreSynchronously;
- (id)arrayForKey:(id)a0;
- (id)_dataRepresentation;
- (void)_prepareEmptyStore;
- (id)allKeys;
- (id)_existingSavedData;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void)_loadDataIfNecessary;
- (void)clearStoreSynchronously;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (void)saveStoreSynchronously;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithBackingStoreURL:(id)a0;
- (id)dataForKey:(id)a0;

@end
