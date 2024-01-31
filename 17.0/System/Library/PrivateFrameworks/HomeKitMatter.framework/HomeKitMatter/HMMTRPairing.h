@class NSNumber, NSString, NSData;

@interface HMMTRPairing : HMFObject <NSCopying>

@property (readonly) NSNumber *nodeID;
@property (readonly) NSNumber *fabricID;
@property (readonly, copy) NSString *fabricLabel;
@property (readonly) NSData *rootPublicKey;
@property (readonly) NSNumber *vendorID;
@property (readonly, copy) NSString *vendorName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNodeID:(id)a0 fabricID:(id)a1 fabricLabel:(id)a2 rootPublicKey:(id)a3 vendorID:(id)a4 vendorName:(id)a5;
- (id)initWithFabricDescriptor:(id)a0 vendorName:(id)a1;

@end
