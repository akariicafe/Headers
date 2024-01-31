@class NSDictionary, HMDAccountHandle;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly, getter=isMulticast) BOOL multicast;
@property BOOL restrictToResidentCapable;
@property (readonly, copy) NSDictionary *deviceCapabilities;

+ (id)shortDescription;

- (unsigned long long)hash;
- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2;
- (id)initWithTarget:(id)a0 handle:(id)a1 multicast:(BOOL)a2 deviceCapabilities:(id)a3;
- (id)remoteDestinationString;

@end
