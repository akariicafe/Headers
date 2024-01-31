@class NSMutableDictionary;

@interface _ContextSyncSubscriptions : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceToDevicesSubscriptions;
@property (retain, nonatomic) NSMutableDictionary *dictionaryRepresentation;

+ (id)deviceSubscribing:(id)a0 withSubscriptons:(id)a1;
+ (id)deviceToDevicesSubscriptions;
+ (id)loadFromDefaults:(id)a0;

- (void).cxx_destruct;
- (id)convertToDictionary;
- (void)saveToDefaults:(id)a0;
- (BOOL)addWake:(BOOL)a0 forIdentifier:(id)a1 subscribedDevice:(id)a2 subscribingDevice:(id)a3;
- (id)devicesSubscribedToDevice:(id)a0;
- (id)devicesSubscribing;
- (BOOL)existsWakingIdentifiersOnSubscribedDevice:(id)a0 forSubscribing:(id)a1;
- (id)identifiersForSubscribingDevice:(id)a0 onSubscribedDevice:(id)a1;
- (BOOL)isIdentifierWaking:(id)a0 subscribedDevice:(id)a1 subscribingDevice:(id)a2;
- (id)lastChangeDateForIdentifier:(id)a0 onSubscribingDevice:(id)a1 onSubscribedDevice:(id)a2;
- (id)messageSubscriptionsForDevice:(id)a0 withLocalIdentifiers:(id)a1;
- (id)messageSubscriptionsForDevice:(id)a0 withNewDSL:(id)a1 withLocalIdentifiers:(id)a2;
- (BOOL)removeAllIdentifiersOnSubscribedDevice:(id)a0 subscribingDevice:(id)a1;
- (BOOL)removeAllIdentifiersOnSubscribingDevice:(id)a0;
- (BOOL)removeIdentifier:(id)a0 subscribedDevice:(id)a1 subscribingDevice:(id)a2;
- (id)sortedDevicesByWakeForIdentifier:(id)a0 subscribedToDevice:(id)a1;
- (id)subscriptionsOnDevice:(id)a0;
- (id)wakeStateForIdentifier:(id)a0 onSubscribingDevice:(id)a1 onSubscribedDevice:(id)a2;

@end
