@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination

@property (readonly, nonatomic) HMDAccount *account;

+ (id)shortDescription;

- (unsigned long long)hash;
- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 account:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 account:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)remoteDestinationString;

@end
