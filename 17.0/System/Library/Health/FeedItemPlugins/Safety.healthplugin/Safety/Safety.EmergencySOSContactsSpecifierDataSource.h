@interface Safety.EmergencySOSContactsSpecifierDataSource : NSObject <HKMedicalIDViewControllerDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ contacts;
    void /* unknown type, empty encoding */ emergencyContactsSpecifiers;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ presentationContext;
}

- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)openEmergencyContactsFooterLink;
- (void)didSelectEmergencyContacts;
- (id)getContactNumberForContactSpecifier:(id)a0;
- (void)medicalIDDidUpdate;

@end
