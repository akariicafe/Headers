@class NSSet, NSString, NSMutableSet, STUIDataAccessStatusDomain, SBSensorActivityAttribution;

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider>

@property (copy, nonatomic) NSSet *activeSensorActivityAttributions;
@property (copy, nonatomic) NSSet *recentSensorActivityAttributions;
@property (readonly, nonatomic) STUIDataAccessStatusDomain *dataAccessDomain;
@property (readonly, copy, nonatomic) NSMutableSet *observers;
@property (readonly, copy, nonatomic) NSSet *activeCameraAndMicrophoneActivityAttributions;
@property (readonly, copy, nonatomic) SBSensorActivityAttribution *mostRecentCameraAndMicrophoneSensorActivityAttribution;
@property (readonly, copy, nonatomic) NSSet *activeAndRecentSensorActivityAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_recentCameraAndMicrophoneActivityAttributions;
- (void)_handleNewDomainData:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOfActivityChange;
- (id)initWithSystemStatusServer:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
