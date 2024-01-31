@interface NewsUI2.AudioAutoClosePlayerHandler : NSObject <CARSessionObserving> {
    void /* unknown type, empty encoding */ audioStatus;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ lazyPlayerViewController;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ carSessionStatus;
    void /* unknown type, empty encoding */ idledAt;
    void /* unknown type, empty encoding */ autoCloseAt;
    void /* unknown type, empty encoding */ autoCloseTimer;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ logDateFormatter;
}

- (void)sessionDidDisconnect:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
