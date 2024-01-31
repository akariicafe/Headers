@class CNContactStore, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface SearchUIContactStore : NSObject <SearchUIBatchedCachePrewarmer>

@property (retain, nonatomic) NSCache *contactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStore;
+ (id)viewControllerDescriptorKeys;
+ (id)avatarViewControllerDescriptorKeys;
+ (id)contactForPhoneNumber:(id)a0 email:(id)a1;
+ (id)placeholderContact;
+ (id)resultRowContactDescriptorKeys;

- (id)init;
- (id)contactsForIdentifiers:(id)a0 withKeys:(id)a1;
- (id)batchingItemsForRowModel:(id)a0;
- (id)cachedContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1;
- (void)fetchContactsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)cachedContactForIdentifier:(id)a0;
- (void)prewarmCacheForBatchedItems:(id)a0;
- (void)fetchContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1 completionHandler:(id /* block */)a2;
- (id)contactForIdentifier:(id)a0;

@end
