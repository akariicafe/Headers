@class NSMutableDictionary;

@interface _ContextSyncOtherDeviceSubscriptions : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceToDSLSubscriptions;

+ (id)deviceToDSLSubscription;
+ (id)subscriptionWithDevice:(id)a0 forWakeSubscription:(id)a1;

- (void).cxx_destruct;
- (BOOL)addWake:(BOOL)a0 forIdentifier:(id)a1 forDevice:(id)a2;
- (BOOL)hasWakingIdentifierForDevice:(id)a0;
- (BOOL)isIdentifierWaking:(id)a0 forDevice:(id)a1;
- (id)lastChangeDateForIdentifier:(id)a0 forDevice:(id)a1;
- (BOOL)removeAllDSLsForDevice:(id)a0;
- (BOOL)removeIdentifier:(id)a0 forDevice:(id)a1;
- (id)subscribedDevices;
- (id)subscriptionsOnDevice:(id)a0;
- (id)wakeStateForIdentifier:(id)a0 forDevice:(id)a1;

@end
