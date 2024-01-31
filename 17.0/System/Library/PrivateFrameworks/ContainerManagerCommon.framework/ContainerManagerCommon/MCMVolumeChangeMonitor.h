@class NSString, NSHashTable, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface MCMVolumeChangeMonitor : NSObject <MCMVolumeChangeMonitor> {
    unsigned int _notifier;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSURL *mountPointURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithWorkloop:(id)a0 mountPointURL:(id)a1;
- (void)_callbackWithVolume:(unsigned int)a0 notificationType:(unsigned int)a1 margs:(void *)a2;
- (unsigned long long)_changeEventStart:(unsigned long long)a0 end:(unsigned long long)a1 targetActiveState:(unsigned long long)a2 fromOldState:(unsigned long long)a3 newState:(unsigned long long)a4;
- (void)_notifyObserver:(id)a0 events:(unsigned long long)a1 newVolumeState:(unsigned long long)a2;
- (void)_notifyObserversIfNeededWithOldState:(unsigned long long)a0 newState:(unsigned long long)a1;
- (void)_notifyObserversOfEvents:(unsigned long long)a0 newVolumeState:(unsigned long long)a1;
- (id)_volumesToMonitor;

@end
