@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell

@property (retain, nonatomic) CKBrowserIconView *browserIconView;
@property (retain, nonatomic) CKAppInstallation *installation;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)iconView;
- (void)layoutSubviews;

@end
