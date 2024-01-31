@protocol CRKAppleIDProviding, CRKIDSPrimitives, CRKCertificateExchangeBroadcastHandlerDelegate;

@interface CRKCertificateExchangeBroadcastHandler : NSObject <CRKIDSMessageBroadcastHandling>

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) id<CRKAppleIDProviding> appleIDProvider;
@property (weak, nonatomic) id<CRKCertificateExchangeBroadcastHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)processMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;
- (id)initWithIDSPrimitives:(id)a0 appleIDProvider:(id)a1;

@end
