@class NSData, NSNumber, NSString;

@interface MTROperationalCredentialsClusterFabricDescriptorStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *rootPublicKey;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *fabricID;
@property (copy, nonatomic) NSNumber *fabricId;
@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
