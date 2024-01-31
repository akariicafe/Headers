@class HMFBoolean, NSSet, NSDictionary, HMFProductInfo, HMDHomeKitVersion, HMDResidentDevice;

@interface HMDResidentDeviceElectionParameters : HMFObject

@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDHomeKitVersion *version;
@property (readonly) HMDResidentDevice *resident;
@property (readonly, copy, getter=isEnabled) HMFBoolean *enabled;
@property (readonly) long long location;
@property (readonly, copy) NSSet *accessories;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0 outCriteria:(unsigned long long *)a1;
- (id)initWithResident:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithResident:(id)a0 enabled:(id)a1 location:(long long)a2 accessories:(id)a3;

@end
