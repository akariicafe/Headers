@class NSHashTable;

@interface SKASystemMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;

+ (id)sharedInstance;
+ (id)logger;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (id)init;
- (void)_updateLockState;
- (void)_listenForKeyBagChangeNotifications;
- (BOOL)_deviceStillUnderFirstLock;
- (void).cxx_destruct;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;

@end
