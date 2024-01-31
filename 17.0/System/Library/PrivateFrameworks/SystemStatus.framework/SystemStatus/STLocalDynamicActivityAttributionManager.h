@class NSString, NSMutableDictionary, STDynamicActivityAttributionListener, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface STLocalDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {
    STDynamicActivityAttributionListener *_dynamicAttributionListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_clientAttributionMap;
    NSMutableSet *_monitorClients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)currentAttributionForAttribution:(id)a0;
- (void)unsubscribeFromUpdates:(id)a0;
- (void)setAttributionLocalizableKey:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (id)currentAttributionKeyForClient:(id)a0;
- (void).cxx_destruct;
- (void)subscribeToUpdates:(id)a0;
- (id)currentAttributedAppForClient:(id)a0;
- (id)currentAttributionForClient:(struct { unsigned int x0[8]; })a0;
- (void)setAttributionWebsiteString:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;

@end
