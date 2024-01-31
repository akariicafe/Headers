@class NSHashTable;

@interface _CUTPowerMonitor : NSObject {
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort { } *_pmPort;
    unsigned int _pmNotifier;
    unsigned int _batteryEntry;
    NSHashTable *_delegates;
    double _currentLevel;
    BOOL _isExternalPowerConnected;
}

- (void).cxx_destruct;

@end
