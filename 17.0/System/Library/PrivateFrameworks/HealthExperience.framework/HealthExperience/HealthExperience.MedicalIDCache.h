@interface HealthExperience.MedicalIDCache : NSObject <MedicalIDChangeObserverDelegate> {
    void /* unknown type, empty encoding */ _medicalIDDataResult;
    void /* unknown type, empty encoding */ medicalIDFetchOperation;
    void /* unknown type, empty encoding */ medicalIDChangeObserver;
    void /* unknown type, empty encoding */ medicalIDStore;
    void /* unknown type, empty encoding */ medicalIDFetchQueue;
}

- (void)medicalIDDidChange;
- (id)init;
- (void).cxx_destruct;

@end
