@class NSString;

@interface HighlightAlerts.HighlightAlertStateSyncManager : NSObject <HKDeviceKeyValueStoreDelegate> {
    void /* unknown type, empty encoding */ updateDelegate;
    void /* unknown type, empty encoding */ contextSyncStore;
    void /* unknown type, empty encoding */ cloudSyncControl;
}

@property (nonatomic, readonly) NSString *description;

- (void)deviceKeyValueStoreDidUpdateForStorageGroup:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
