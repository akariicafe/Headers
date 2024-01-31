@class NSTimer, PKMapContainer;

@interface PKPeerPaymentRecipientCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapAccessLock;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)sharedCache;
+ (id)_instanceName;

- (id)init;
- (void)dealloc;
- (BOOL)purgeCache;
- (id)__init;
- (void).cxx_destruct;
- (BOOL)_writeMapToDisk;
- (BOOL)_canReadMap;
- (BOOL)_canWriteMap;
- (void)_handleDiskMapChangedNotification:(id)a0;
- (void)_handlePurgedNotification:(id)a0;
- (id)_keyForRecipientAddress:(id)a0;
- (void)_locked_setMapNeedsWrite;
- (void)_updateMapsFromDisk;
- (void)cacheRecipient:(id)a0 forRecipientAddress:(id)a1;
- (BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)a0;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)a0;
- (void)purgeRecipientWithRecipientAddress:(id)a0;
- (id)recipientForRecipientAddress:(id)a0;

@end
