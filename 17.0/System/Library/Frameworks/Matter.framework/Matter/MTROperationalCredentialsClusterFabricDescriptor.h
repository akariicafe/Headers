@class NSData, NSString, NSNumber;

@interface MTROperationalCredentialsClusterFabricDescriptor : MTROperationalCredentialsClusterFabricDescriptorStruct

@property (copy, nonatomic) NSData *rootPublicKey;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *fabricIndex;

@end
