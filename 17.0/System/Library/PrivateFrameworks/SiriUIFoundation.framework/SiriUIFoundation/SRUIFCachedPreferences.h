@class UAFAssetUtilities, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SRUIFCachedPreferences : NSObject {
    NSUserDefaults *_textInputDefaults;
    BOOL _isHoldToTalkForTextInputEnabled;
    BOOL _isSiriMiniEnabled;
    BOOL _isStreamingDictationEnabled;
    BOOL _isSiriSafeForLockScreen;
    BOOL _announceNotificationsInCarPlayTemporarilyDisabled;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    UAFAssetUtilities *_assetUtilities;
}

@property (readonly, nonatomic) BOOL isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) BOOL isSiriMiniEnabled;
@property (readonly, nonatomic) BOOL isStreamingDictationEnabled;
@property (readonly, nonatomic) BOOL isSiriSafeForLockScreen;
@property (readonly, nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)updatePreferences;
- (BOOL)understandingOnDeviceAssetsAvailable;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)a0;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;

@end
