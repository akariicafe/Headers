@class NSMutableSet, NSMutableDictionary;

@interface BRInterfaceKeyboard : BRInterface {
    struct __IOHIDEventSystemClient { } *_client;
    NSMutableDictionary *_propertyCache;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    BOOL _isReady;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
}

@property (readonly, nonatomic) NSMutableSet *services;

+ (id)interface;

- (BOOL)isReady;
- (id)init;
- (void)dealloc;
- (id)propertyList;
- (BOOL)_setConfig:(id)a0 forState:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)maxAssetSlots;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (unsigned long long)unusedAssetSlots;
- (BOOL)_setCachedPropertiesOnService:(struct __IOHIDServiceClient { } *)a0;
- (id)description;
- (void)_findServices;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (BOOL)_servicesSetProperty:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (BOOL)_enableState:(unsigned long long)a0;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (BOOL)_disableState:(unsigned long long)a0;

@end
