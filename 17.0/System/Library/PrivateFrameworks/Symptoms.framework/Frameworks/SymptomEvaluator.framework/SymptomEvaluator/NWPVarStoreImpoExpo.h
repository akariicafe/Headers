@class NSString, ImpoExpoService;

@interface NWPVarStoreImpoExpo : NSObject <NWPVarStoreProtocol> {
    ImpoExpoService *ieservice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (id)init;
- (id)listItemsNameWithPrefix:(id)a0 sortDescriptor:(id)a1;
- (void).cxx_destruct;
- (long long)deleteItemsMatchingPredicate:(id)a0;
- (id)fetchItemUnderName:(id)a0 verificationBlock:(id /* block */)a1;
- (BOOL)storeUnderName:(id)a0 item:(id)a1;
- (id)_initWithImpoExpo:(id)a0;

@end
