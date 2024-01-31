@class NSString;
@protocol WFCertificateProviderContext;

@interface WFTrustCertificateViewController : TrustCertificateViewController <TrustCertificateViewControllerDelegate, WFNetworkView>

@property (retain, nonatomic) id<WFCertificateProviderContext> credentialsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

- (void).cxx_destruct;
- (void)trustCertificateViewController:(id)a0 finishedWithReturnCode:(int)a1;
- (id)initWithCertificateProviderContext:(id)a0;

@end
