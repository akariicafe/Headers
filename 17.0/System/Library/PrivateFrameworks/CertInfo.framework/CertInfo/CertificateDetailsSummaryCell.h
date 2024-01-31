@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell

@property (retain, nonatomic) NSArray *details;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setCertificateTrust:(struct __SecTrust { } *)a0 certificateExpiration:(id)a1 certificateIsTrusted:(BOOL)a2;
- (void)setDetailsWithCertificateTrust:(struct __SecTrust { } *)a0 certificateExpiration:(id)a1 certificateIsTrusted:(BOOL)a2;

@end
