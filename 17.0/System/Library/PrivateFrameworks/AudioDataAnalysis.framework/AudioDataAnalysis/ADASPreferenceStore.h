@class NSDictionary, NPSDomainAccessor, NSObject;
@protocol OS_dispatch_queue;

@interface ADASPreferenceStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _npsDomainLock;
    NSObject<OS_dispatch_queue> *_npsDomainAccessorQueue;
}

@property (readonly, nonatomic) NSDictionary *keyMap;
@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) NSDictionary *specialDarwinKeys;
@property (retain, nonatomic) NPSDomainAccessor *coreAudioDomain;
@property (retain, nonatomic) NPSDomainAccessor *coreAudioDeviceDomain;

+ (id)sharedInstance;

- (id)init;
- (void)initNPSDomain;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)pairedDeviceStateChanged:(id)a0;

@end
