@class NSString, CARSessionRequestAgent, NSObject;
@protocol OS_dispatch_queue;

@interface APCarSessionRequestHandler : NSObject <CARSessionRequestHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFSet { } *_carPlayHelpers;
    CARSessionRequestAgent *_agent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancelRequests;
- (void)prepareForRemovingWiFiUUID:(id)a0 completion:(id /* block */)a1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void)startSessionWithHost:(id)a0 completion:(id /* block */)a1;
- (void)stoppedSessionForHostIdentifier:(id)a0;
- (void)_startAdvertisingCarPlayControlForUSB;
- (void)_startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void)addCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper { } *)a0;
- (void)checkCarPlayControlAdvertisingForUSB;
- (void)checkCarPlayControlAdvertisingForWiFiUUID:(id)a0;
- (void)removeCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper { } *)a0;

@end
