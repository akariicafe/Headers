@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_expirationLabel;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void)setExpiration:(id)a0;
- (void)_setText:(id)a0 forLabel:(id)a1 withRedColor:(BOOL)a2;
- (void)_setupLabel:(id)a0 isSubtitle:(BOOL)a1;

@end
