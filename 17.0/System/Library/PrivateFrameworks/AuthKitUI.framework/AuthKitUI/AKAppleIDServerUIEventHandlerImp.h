@class NSString;

@interface AKAppleIDServerUIEventHandlerImp : NSObject <AKAppleIDServerUIEventHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchUserInformationForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)postCDPFollowUpForError:(id)a0;
- (void)reauthenticateWithContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)startCDPRepairWithContext:(id)a0 withAdditionalData:(id)a1 completion:(id /* block */)a2;
- (void)updateAccountUsernameForAltDSID:(id)a0 withHarvestedData:(id)a1;
- (void)updateStateWithExternalAuthenticationResponse:(id)a0 forContext:(id)a1 withAuthController:(id)a2 completion:(id /* block */)a3;

@end
