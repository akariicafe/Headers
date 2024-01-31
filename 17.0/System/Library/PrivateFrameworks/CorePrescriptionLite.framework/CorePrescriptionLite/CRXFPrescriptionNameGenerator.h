@class NSString;

@interface CRXFPrescriptionNameGenerator : NSObject {
    NSString *_defaultLensName;
    NSString *_guestLensName;
    NSString *_demoLensName;
    NSString *_readerLensName;
    NSString *_readerLensPersonalizedName;
    NSString *_protectiveLensName;
    NSString *_protectiveLensPersonalizedName;
    NSString *_prescriptionLensName;
    NSString *_prescriptionLensPersonalizedName;
}

- (id)init;
- (void).cxx_destruct;
- (id)generatePrescriptionNameForLensType:(unsigned long long)a0 userName:(id)a1 inGuestMode:(BOOL)a2;

@end
