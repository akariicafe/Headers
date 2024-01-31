@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject {
    int _medicalIDChangedToken;
}

@property (weak, nonatomic) id<MedicalIDChangeObserverDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startObservingChanges;

@end
