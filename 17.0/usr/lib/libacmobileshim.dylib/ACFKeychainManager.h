@class NSString;

@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol>

@property (retain, nonatomic) NSString *usedAccessGroup;
@property (readonly, nonatomic) NSString *obtainAccessGroup;
@property (readonly, nonatomic) NSString *sharedAccessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)storeItemWithInfo:(id)a0 share:(BOOL)a1 result:(id *)a2;
- (void)dumpResults:(id)a0;
- (void)dumpResults:(id)a0 printAttributes:(BOOL)a1;
- (BOOL)removeItemWithInfo:(id)a0;
- (id)searchItemWithInfo:(id)a0;
- (int)secAddItemWithAttributes:(id)a0 result:(id *)a1;
- (int)secItemCopyMatchingWithAttributes:(id)a0 result:(id *)a1;
- (id)universalAccessGroup;

@end
