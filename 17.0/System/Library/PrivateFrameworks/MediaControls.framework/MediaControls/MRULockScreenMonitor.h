@class NSArray, NSHashTable;

@interface MRULockScreenMonitor : NSObject

@property (nonatomic) int mobileKeyBagLockStatusNotifyToken;
@property (readonly, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSHashTable *weakObservers;
@property (readonly, nonatomic, getter=isDeviceLocked) BOOL deviceLocked;

+ (id)sharedMonitor;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)updateDeviceLocked;
- (void)setDeviceLocked:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
