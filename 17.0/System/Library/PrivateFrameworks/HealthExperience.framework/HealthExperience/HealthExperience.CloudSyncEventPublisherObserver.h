@interface HealthExperience.CloudSyncEventPublisherObserver : NSObject <HKCloudSyncObserverDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ subject;
}

- (id)init;
- (void).cxx_destruct;
- (void)cloudSyncObserverSyncCompleted:(id)a0;
- (void)cloudSyncObserver:(id)a0 syncDidStartWithProgress:(id)a1;
- (void)cloudSyncObserver:(id)a0 syncFailedWithError:(id)a1;
- (void)cloudSyncObserverStatusUpdated:(id)a0 status:(id)a1;

@end
