@class NSData, NSNumber;

@interface MTRNetworkCommissioningClusterNetworkInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *networkID;
@property (copy, nonatomic) NSNumber *connected;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
