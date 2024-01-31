@interface HMDUnassociatedAppleHomePodAccessory : HMDUnassociatedAppleMediaAccessory

- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 idsIdentifierString:(id)a4 requiredPairingCapabilities:(unsigned long long)a5 minimumPairingSoftware:(id)a6 rawAccessoryCapabilities:(id)a7 rawResidentCapabilities:(id)a8 messageDispatcher:(id)a9;
- (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

@end
