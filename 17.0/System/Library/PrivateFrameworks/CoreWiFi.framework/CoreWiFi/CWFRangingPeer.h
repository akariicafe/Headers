@class NSString, NSData;

@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *PMK;
@property (nonatomic) unsigned long long numberOfMeasurements;
@property (nonatomic) BOOL useCoreRotation;

+ (id)rangingPeerWithMACAddress:(id)a0 PMK:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRangingPeer:(id)a0;

@end
