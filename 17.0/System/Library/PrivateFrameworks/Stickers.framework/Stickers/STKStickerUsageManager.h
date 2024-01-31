@interface STKStickerUsageManager : NSObject {
    void /* unknown type, empty encoding */ dictionary;
    void /* unknown type, empty encoding */ serializationLocation;
    void /* unknown type, empty encoding */ serializationContextLocation;
}

@property (class, nonatomic, readonly) STKStickerUsageManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)stickerCountsForBundleIdentifier:(id)a0;
- (void)logStickerWithStickerIdentifier:(id)a0 bundleIdentifier:(id)a1;

@end
