@class CertInfoCertificateListCellContentView;

@interface CertInfoCertificateListTableViewCell : UITableViewCell {
    CertInfoCertificateListCellContentView *_certificateContentView;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithTrustDescription:(id)a0 certificateIndex:(unsigned long long)a1;

@end
