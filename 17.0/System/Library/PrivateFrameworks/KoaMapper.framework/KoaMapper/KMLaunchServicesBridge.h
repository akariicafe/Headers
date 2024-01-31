@class NSString, KVItemMapper, NSDictionary;

@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)init;
- (id)initWithLanguageCode:(id)a0;
- (void).cxx_destruct;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)_appEnumerator;
- (BOOL)_checkAppValidity:(id)a0;
- (id)_getOverrideByInfoPlist:(id)a0;

@end
