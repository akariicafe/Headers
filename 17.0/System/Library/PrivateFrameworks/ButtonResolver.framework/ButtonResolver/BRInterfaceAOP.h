@class NSString, HAButtonHapticsLoader, NSMutableIndexSet, NSMutableDictionary, NSMutableArray;

@interface BRInterfaceAOP : BRInterface {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _arrivalNotification;
    id /* block */ _notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    BOOL _isReady;
    unsigned long long _maxAssetSlots;
}

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) BOOL fastHaptics;

+ (id)interface;
+ (int)_convertClickState:(unsigned long long)a0;
+ (int)_convertForceFeel:(unsigned long long)a0;

- (BOOL)isReady;
- (BOOL)_setStateAOPConfigsFromStateData:(id)a0 andSlotData:(id)a1;
- (id)init;
- (void)dealloc;
- (id)propertyList;
- (BOOL)_setDefaultAOPConfigs;
- (void)mergeStateChanges:(id)a0 into:(id)a1;
- (unsigned long long)maxAssetSlots;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (unsigned long long)unusedAssetSlots;
- (id)description;
- (void)_findService;
- (BOOL)updateReadyState;
- (id)dataForSlot:(id)a0 fromArray:(id)a1;
- (BOOL)playState:(unsigned long long)a0 forSpeed:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)a0;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (void)_receiveLoaderAvailableNotification:(id)a0;
- (BOOL)_serviceSetProperty:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (id)initWithFastHaptics:(BOOL)a0;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;

@end
