@class NSObject;
@protocol OS_dispatch_queue;

@interface MXEndpointDescriptorCache : NSObject {
    struct __CFArray { } *_registeredEndpointManagers;
    struct __CFArray { } *_availableEndpointsInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct OpaqueFigReentrantMutex { } *_cacheMutex;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (struct __CFDictionary { } *)copyRouteDescriptorForEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)_availableEndpointsDidChangeForEndpointManager:(struct OpaqueFigEndpointManager { } *)a0 atDate:(id)a1;
- (struct __CFArray { } *)_copyMatchingEndpointsForManagerType:(struct __CFString { } *)a0 predicateMatchFunction:(void /* function */ *)a1 inEndpointPredicateRefCon:(void *)a2;
- (void)_endpointDescriptionDidChangeForEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (struct OpaqueFigReentrantMutex { } *)_getCacheMutex;
- (id)_getWorkQueue;
- (struct __CFArray { } *)copyAvailableEndpointsForManager:(struct OpaqueFigEndpointManager { } *)a0;
- (struct __CFArray { } *)copyAvailableRouteDescriptorsForManager:(struct OpaqueFigEndpointManager { } *)a0;
- (struct OpaqueFigEndpoint { } *)copyEndpointFromRouteDescriptor:(struct __CFDictionary { } *)a0 routingContextUUID:(struct __CFString { } *)a1;
- (struct OpaqueFigEndpoint { } *)copyEndpointWithDeviceID:(struct __CFString { } *)a0 isStreamID:(BOOL)a1 managerType:(struct __CFString { } *)a2 routingContextUUID:(struct __CFString { } *)a3;
- (struct __CFArray { } *)copyRegisteredEndpointMangers;
- (struct __CFArray { } *)copyRouteDescriptorsForEndpoints:(struct __CFArray { } *)a0;
- (struct OpaqueFigEndpointManager { } *)getEndpointManagerForType:(struct __CFString { } *)a0;
- (void)registerEndpointManagerForCaching:(struct OpaqueFigEndpointManager { } *)a0;

@end
