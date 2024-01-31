@class NSNumber;

@interface MTRDescriptorClusterDeviceTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *deviceType;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *revision;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
