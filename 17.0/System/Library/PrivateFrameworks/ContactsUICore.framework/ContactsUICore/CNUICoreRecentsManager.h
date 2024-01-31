@class CRRecentContactsLibrary;
@protocol CNKeyDescriptor, CNScheduler;

@interface CNUICoreRecentsManager : NSObject

@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary;
@property (readonly, nonatomic) id<CNScheduler> workQueue;

+ (id)queryForHandles:(id)a0;
+ (id)allHandlesToSearchForFromContact:(id)a0;
+ (id)handlesForContactProperties:(id)a0;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)a0;
+ (id)queryForHandles:(id)a0 sorted:(BOOL)a1;
+ (id)supportedPropertyDescriptions;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;
+ (id /* block */)transformForPropertyDescription:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecentsLibrary:(id)a0 schedulerProvider:(id)a1;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)a0;
- (id)recentContactsMatchingContactProperties:(id)a0;
- (void)removeRecents:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRecentsWithIdentifiers:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (id)sortedRecentHandlesMatchingAllPropertiesOfContact:(id)a0;
- (id)recentsContactsMatchingHandles:(id)a0;
- (id)restoreRecents:(id)a0;
- (id)recentsContactsMatchingHandles:(id)a0 sorted:(BOOL)a1;
- (id)removeRecents:(id)a0;

@end
