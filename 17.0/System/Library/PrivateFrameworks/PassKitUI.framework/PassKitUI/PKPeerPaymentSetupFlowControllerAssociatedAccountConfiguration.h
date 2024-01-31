@class NSString, PKFamilyMember, PKPeerPaymentPreferences;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (retain, nonatomic) PKPeerPaymentPreferences *updatedPreferences;
@property (readonly, nonatomic) long long setupType;
@property (readonly, nonatomic) id<PKPeerPaymentAssociatedAccountSetupDelegate> associatedAccountSetupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0 associatedAccountSetupDelegate:(id)a1 setupType:(long long)a2;
- (unsigned long long)peerPaymentSetupConfigurationType;

@end
