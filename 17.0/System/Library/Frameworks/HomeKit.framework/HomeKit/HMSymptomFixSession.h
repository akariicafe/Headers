@class NSError, NSString, HMFTimer, SFDeviceRepairSession, NSUUID, HMSymptom, _HMContext, UIViewController;
@protocol HMSymptomFixSessionDelegate;

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SFDeviceRepairSession *deviceRepairSession;
@property (nonatomic, getter=isDeviceRepairSessionFinished) BOOL deviceRepairSessionFinished;
@property (nonatomic) BOOL hasSymptomDisappeared;
@property (retain, nonatomic) HMFTimer *symptomDisappearanceTimer;
@property (readonly, nonatomic) HMSymptom *symptom;
@property (readonly, nonatomic) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned int deviceRepairFlags;
@property (weak, nonatomic) id<HMSymptomFixSessionDelegate> delegate;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_createDeviceRepairSession;
+ (id)_createSymptomDisappearanceTimer;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)_updateState;
- (void)stop;
- (void).cxx_destruct;
- (void)_startSymptomDisappearanceTimer;
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)a0 error:(id)a1;
- (id)initWithSymptom:(id)a0 deviceIdentifier:(id)a1 context:(id)a2;
- (void)noteSymptomDisappeared;

@end
