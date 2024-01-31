@class NSNumber, MCProfileServiceProfile, NSArray;

@interface MCConfigurationProfile : MCProfile {
    NSArray *_payloads;
    NSArray *_managedPayloads;
}

@property (retain, nonatomic) NSNumber *isCloudProfileNum;
@property (retain, nonatomic) NSNumber *isCloudLockedNum;
@property (retain, nonatomic) MCProfileServiceProfile *OTAProfile;
@property (nonatomic) BOOL isCloudProfile;
@property (nonatomic) BOOL isCloudLocked;
@property (nonatomic) BOOL isMDMProfile;

- (id)verboseDescription;
- (id)serializedDictionary;
- (id)payloads;
- (id)description;
- (void).cxx_destruct;
- (id)_localizedPayloadSummaryByType:(id)a0;
- (id)managedPayloads;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate { } *)a0;
- (void)_addObjectsOfClass:(Class)a0 fromArray:(id)a1 toArray:(id)a2;
- (void)_sortPayloads;
- (id)_sortPayloads:(id)a0;
- (struct __SecCertificate { } *)copyCertificateFromPayloadWithUUID:(id)a0;
- (struct __SecCertificate { } *)copyCertificateWithPersistentID:(id)a0;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)a0 options:(id)a1 signerCerts:(id)a2 allowEmptyPayload:(BOOL)a3 outError:(id *)a4;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)a0;
- (BOOL)isManagedByMDM;
- (BOOL)isManagedByProfileService;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)payloadWithUUID:(id)a0;
- (void)replacePayloadWithUUID:(id)a0 withPayload:(id)a1;
- (id)stubDictionary;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)a0;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)a0;

@end
