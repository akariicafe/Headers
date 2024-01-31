@class NSString, _TtC9KoaMapper27KMFindMySyncDevicesProvider;

@interface KMFindMySyncDevicesBridge : NSObject <KMProviderDatasetBridge> {
    _TtC9KoaMapper27KMFindMySyncDevicesProvider *_devicesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)init;
- (void).cxx_destruct;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDevicesProvider:(id)a0;

@end
