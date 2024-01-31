@class NSNumber;

@interface MTRAccessControlClusterAccessControlTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *deviceType;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
