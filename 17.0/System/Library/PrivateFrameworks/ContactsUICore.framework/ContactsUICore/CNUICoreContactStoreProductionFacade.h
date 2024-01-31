@class CNContactStore, NSString;

@interface CNUICoreContactStoreProductionFacade : NSObject <CNUICoreContactStoreFacade, CNUICoreParentContainerProvider>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)containerForContact:(id)a0;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (BOOL)enumerateContactsWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;

@end
