@class NSString, HKMedicalIDEmergencyContactFlow, UINavigationController, HKHealthStore, FAFamilyCircle, HKMedicalIDStore, HKMedicalIDViewController, _HKMedicalIDData;

@interface FAHealthKitSoftLinking : NSObject <HKMedicalIDEmergencyContactFlowDelegate, HKMedicalIDViewControllerDelegate, FAHealthKitSoftLinkingProtocol> {
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    _HKMedicalIDData *_medicalIDData;
    FAFamilyCircle *_familyCircle;
    HKMedicalIDEmergencyContactFlow *_contactFlow;
    HKMedicalIDViewController *_medicalIDViewController;
    UINavigationController *_navViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)emergencyContactFlow:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactFlowDidCancel:(id)a0;
- (id)_pathToEmergencyRow;
- (void)fetchLastModifiedDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchMedicalIDData:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentMedicalIDViewController:(id)a0 withFamily:(id)a1 isEmergencyContactSetup:(BOOL)a2;

@end
