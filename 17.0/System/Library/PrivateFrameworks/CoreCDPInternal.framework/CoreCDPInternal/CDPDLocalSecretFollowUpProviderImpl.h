@class NSString;

@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider> {
    NSString *_altDSID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAltDSID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deleteLocalSecretChangeFollowUp;
- (void)deleteConfirmExistingSecretFollowUp;
- (void)deleteCreatePasscodeFollowUp;
- (void)postConfirmExistingSecretFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
