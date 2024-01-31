@class NSString, PKSecureElementPass;
@protocol PKSecureElementPassContactIssuerHelperDelegate;

@interface PKSecureElementPassContactIssuerHelper : NSObject <MFMailComposeViewControllerDelegate> {
    BOOL _isAppleAccess;
}

@property (weak, nonatomic) id<PKSecureElementPassContactIssuerHelperDelegate> delegate;
@property (copy, nonatomic) PKSecureElementPass *pass;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) id /* block */ openBusinessChatHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)callIssuer;
- (void)emailIssuer;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)openIssuerWebsite;
- (void)presentContactViewController:(unsigned long long)a0;

@end
