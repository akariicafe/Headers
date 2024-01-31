@interface MessagesCloudSync.RecordStoreRegistry : _TtCs12_SwiftObject <MessagesCloudSync.RecordStoreRegistering> {
    void /* unknown type, empty encoding */ recordStore;
}

- (id)assetStore;
- (id)recordStoreFor:(long long)a0;
- (id)deletingStoreFor:(long long)a0;
- (void)registerRecordStoreWithType:(long long)a0 store:(id)a1;

@end
