@class CLMiLoConnection, NSUUID, NSObject;
@protocol OS_dispatch_queue, CLMiLoConnectionDelegate;

@interface CLMiLoConnectionInternal : NSObject {
    void *_locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<CLMiLoConnectionDelegate> _delegate;
    CLMiLoConnection *_sender;
    NSUUID *_connectedServiceIdentifier;
}

+ (BOOL)_isKnownNonActionableMessage:(void *)a0;

- (void)dealloc;
- (void)_teardown;
- (void)_handleDaemonEvent:(id)a0;
- (void)_unregisterForMiLoGenericEvents;
- (void)_notifyClientRecordingMetaInfo:(id)a0;
- (void)_unregisterForMiloServiceEvents;
- (void)_connectServiceWithIdentifier:(id)a0;
- (void)_createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1;
- (void)_deleteServiceWithIdentifier:(id)a0;
- (void)_disconnectServiceWithIdentifier:(id)a0;
- (void)_handleDebugResponseEvent:(id)a0;
- (void)_handleGenericEvent:(id)a0;
- (void)_handleMiLoConnectionStatusEvent:(id)a0;
- (void)_handlePredictionUpdateEvent:(id)a0;
- (void)_invalidateLocationClient;
- (void)_labelEventWithRequestIdentifier:(id)a0 placeIdentifier:(id)a1 observationIdentifier:(id)a2;
- (void)_labelEventsWithStartDate:(id)a0 endDate:(id)a1 placeIdentifier:(id)a2 requestIdentifier:(id)a3;
- (void)_notifyClientConnectServiceDidFailWithServiceIdentifier:(id)a0 withError:(id)a1;
- (void)_notifyClientCreateServiceDidFailWithError:(id)a0;
- (void)_notifyClientDeleteServiceDidFailWithServiceIdentifier:(id)a0 withError:(id)a1;
- (void)_notifyClientDidCompleteClientRequest:(id)a0 withError:(id)a1;
- (void)_notifyClientDidCreateServiceWithServiceIdentifier:(id)a0;
- (void)_notifyClientDidDeleteServiceWithServiceIdentifier:(id)a0;
- (void)_notifyClientDidExportDatabaseWithResponse:(id)a0;
- (void)_notifyClientDidFindMyServicesWithServiceDescriptors:(id)a0;
- (void)_notifyClientDidUpdateMiLoConnectionStatus:(id)a0;
- (void)_notifyClientDidUpdatePrediction:(id)a0;
- (void)_notifyClientDidUpdateServiceStatus:(id)a0;
- (void)_notifyClientDisconnectServiceDidFailWithError:(id)a0 serviceIdentifier:(id)a1;
- (void)_notifyClientOfGenericEventResponse:(id)a0;
- (void)_notifyClientQueryMiLoConnectionStatusDidFailWithError:(id)a0;
- (void)_notifyClientQueryServiceDidFailWithError:(id)a0;
- (void)_purgeAllMiLoDataWithRequestIdentifier:(id)a0;
- (void)_queryMiLoConnectionStatus;
- (void)_queryMyServices;
- (void)_registerForMiLoConnectionStatusEvents;
- (void)_registerForMiLoDebugResponseEvents;
- (void)_registerForMiLoGenericEvents;
- (void)_registerForMiLoServiceEvents;
- (void)_removeLabels:(id)a0 withRequestIdentifier:(id)a1;
- (void)_requestExportDatabaseWithRequestIdentifier:(id)a0;
- (void)_requestMiLoPredictionWithRequestIdentifier:(id)a0;
- (void)_requestModelLearningWithRequestIdentifier:(id)a0;
- (void)_requestObservationWithRequestIdentifier:(id)a0 placeIdentifier:(id)a1;
- (void)_setHandlerForMiLoPredictionEvents;
- (void)_startUpdatingMicroLocationWithConfiguration:(id)a0 withRequestIdentifier:(id)a1;
- (void)_stopUpdatingMicroLocationWithRequestIdentifier:(id)a0;
- (void)_unregisterForMiLoConnectionStatusEvents;
- (void)_unregisterForMiLoDebugResponseEvents;
- (void)_unsetHandlerForMiLoPredictionEvents;
- (id)initWithInfo:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;

@end
