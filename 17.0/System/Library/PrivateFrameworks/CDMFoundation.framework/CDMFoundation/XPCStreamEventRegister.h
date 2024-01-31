@class NSDictionary;

@interface XPCStreamEventRegister : NSObject

@property (readonly, nonatomic) NSDictionary *registrationsMap;
@property (readonly, nonatomic) NSDictionary *activityServicesMap;

+ (id)_registrationKeyFromStreamName:(id)a0 eventName:(id)a1;
+ (id)emptyRegister;
+ (id)registerFromDagServiceNames:(id)a0;
+ (id)registerWithRegistrations:(id)a0;
+ (id)registerWithRegistrations:(id)a0 withActivityServicesMap:(id)a1;

- (void).cxx_destruct;
- (id)_initWithRegistrationsMap:(id)a0 withActivityServicesMap:(id)a1;
- (BOOL)handleXPCActivity:(id)a0 fromIdentifier:(id)a1 withAssetCollection:(id)a2 withSelfMetadata:(id)a3;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1 currentConfig:(id)a2 withSelfMetadata:(id)a3;
- (id)handleableXPCActivities;
- (id)handleableXPCEventStreams;

@end
