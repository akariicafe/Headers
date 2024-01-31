@class NSString, KVItemBuilder;

@interface KMRadioStationBridge : NSObject <KMProviderDatasetBridge, KMProviderBridgeListener> {
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapListenerWithHandler:(id /* block */)a0;

- (long long)itemType;
- (id)init;
- (void).cxx_destruct;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
