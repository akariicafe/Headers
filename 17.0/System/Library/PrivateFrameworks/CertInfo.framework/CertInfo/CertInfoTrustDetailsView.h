@class NSArray, CertInfoCertificateDetailsView;

@interface CertInfoTrustDetailsView : UIView {
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_appendRemainingCertificates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trustProperties:(id)a1;

@end
