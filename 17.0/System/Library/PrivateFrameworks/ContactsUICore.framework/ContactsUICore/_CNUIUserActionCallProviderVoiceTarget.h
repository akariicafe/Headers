@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget

- (id)actionsForContact:(id)a0 discoveringEnvironment:(id)a1;
- (id)actionsForEmailAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForInstantMessageAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 group:(long long)a2 options:(unsigned long long)a3 discoveringEnvironment:(id)a4;
- (id)actionsForSocialProfiles:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)externalAccountIdentifierForContact:(id)a0 contactStore:(id)a1;
- (BOOL)isCallProviderManagedUsingDiscoveringEnvironment:(id)a0;
- (id)managedBundleIdentifierForContact:(id)a0 discoveringEnvironment:(id)a1;

@end
