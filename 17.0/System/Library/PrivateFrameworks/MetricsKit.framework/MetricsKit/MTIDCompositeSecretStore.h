@class NSString, NSMutableDictionary;

@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore>

@property (retain, nonatomic) NSMutableDictionary *stores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)clearLocalData;
- (id)maintainSchemes:(id)a0 options:(id)a1;
- (id)resetSchemes:(id)a0 options:(id)a1;
- (id)schemesGroupedByStore:(id)a0;
- (id)secretForScheme:(id)a0 options:(id)a1;
- (id)secretStoreForScheme:(id)a0;
- (id)storeKeyForScheme:(id)a0;
- (id)syncForSchemes:(id)a0 options:(id)a1;

@end
