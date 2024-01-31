@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {
    struct __SCDynamicStore { } *_dynamicStore;
    struct __CFRunLoopSource { } *_dynamicStoreSource;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)ethernetNetworkInterfaces;
- (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface { } *)a0;
- (BOOL)hasEthernetNetworkInterfaces;
- (void)ethernetDynamicStoreDidChange;
- (void)registerForEthernetAdapterNotifications;

@end
