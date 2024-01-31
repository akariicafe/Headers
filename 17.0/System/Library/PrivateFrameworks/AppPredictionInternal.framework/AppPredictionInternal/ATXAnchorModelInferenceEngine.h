@class NSUserDefaults, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)queueHandleInferenceEvent:(id)a0;
- (void)retryPreviouslyIncompleteInference;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)start;
- (void)handleLOIExit;
- (void)handleAnchorExitEventForGymArrival;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (id)supportedAnchorsForInference;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleInferenceEvent:(id)a0;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void).cxx_destruct;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)registerAnchorEventListeners;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)handleLOIEntrance;
- (void)handleAnchorEventForGymArrival;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;

@end
