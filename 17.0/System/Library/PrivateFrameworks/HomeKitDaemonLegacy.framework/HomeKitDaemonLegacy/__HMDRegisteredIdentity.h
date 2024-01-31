@class NSMutableArray, HMFPairingIdentity;

@interface __HMDRegisteredIdentity : HMFObject

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (id)init;
- (id)initWithIdentity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;

@end
