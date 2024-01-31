@class NSUUID, SPHandle, NSDate;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) SPHandle *sharee;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSUUID *sharingCircleIdentifier;
@property (copy, nonatomic) NSUUID *peerTrustIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 beaconIdentifier:(id)a1 sharingCircleIdentifier:(id)a2 peerTrustIdentifier:(id)a3 owner:(id)a4 sharee:(id)a5 state:(long long)a6 creationDate:(id)a7 expirationDate:(id)a8;

@end
