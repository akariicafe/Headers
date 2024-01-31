@interface AssetViewer.ScreenRecorder : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ referenceTime;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ movieWriter;
    void /* unknown type, empty encoding */ metalTextureCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userNotificationCenter;
}

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
