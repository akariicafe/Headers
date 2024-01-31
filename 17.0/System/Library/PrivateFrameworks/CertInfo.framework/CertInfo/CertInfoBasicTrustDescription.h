@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {
    struct __SecTrust { } *_trust;
    int _action;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)summaryTitle;
- (BOOL)isTrusted;
- (id)_expirationDate;
- (id)initWithTrust:(struct __SecTrust { } *)a0 action:(int)a1;
- (id)summarySubtitle;
- (unsigned long long)certificateCount;
- (id)certificateExpirationDateAtIndex:(unsigned long long)a0;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)a0;
- (id)certificatePropertiesAtIndex:(unsigned long long)a0;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)a0;
- (BOOL)isRootCertificate;
- (id)summaryDescriptionItems;

@end
