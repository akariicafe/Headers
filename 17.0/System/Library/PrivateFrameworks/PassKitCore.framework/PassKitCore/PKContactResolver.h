@class CNContactStore, NSArray, NSHashTable, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PKContactResolver : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
}

@property (retain, nonatomic) NSCache *handleToContactCache;
@property (retain, nonatomic) NSCache *altDSIDToContactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSArray *keysToFetch;

+ (id)contactForFamilyMember:(id)a0 nameComponents:(id)a1 imageData:(id)a2;
+ (id)defaultContactResolver;

- (void)invalidateCache;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)contactForIdentifier:(id)a0;
- (void)_accessDelegatesWithHandler:(id /* block */)a0;
- (void)_handleContactStoreDidChangeNotification:(id)a0;
- (id)_predicateForHandle:(id)a0;
- (id)contactForAccountUser:(id)a0;
- (void)contactForAccountUser:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactForHandle:(id)a0;
- (void)contactForHandle:(id)a0 withCompletion:(id /* block */)a1;
- (void)contactForHandles:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)hasCachedResultForAccountUser:(id)a0;
- (BOOL)hasCachedResultForHandle:(id)a0;
- (id)initWithContactStore:(id)a0 keysToFetch:(id)a1;

@end
