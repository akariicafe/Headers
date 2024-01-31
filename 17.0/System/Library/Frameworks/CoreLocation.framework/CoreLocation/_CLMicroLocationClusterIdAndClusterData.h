@class NSString;

@interface _CLMicroLocationClusterIdAndClusterData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) double meanBLEReceivedSignalStrength;
@property (readonly, nonatomic) double meanUWBRange;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClusterIdentifier:(id)a0 meanBleRssi:(double)a1 meanUwbRange:(double)a2;

@end
