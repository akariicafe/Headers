@class NSString, NSNumber, NSData;

@interface MTSThreadScanResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *networkName;
@property (readonly, copy) NSNumber *panID;
@property (readonly, copy) NSNumber *extendedPANID;
@property (readonly, copy) NSNumber *channel;
@property (readonly, copy) NSData *extendedAddress;
@property (readonly, copy) NSNumber *rssi;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *lqi;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNetworkName:(id)a0 panID:(id)a1 extendedPANID:(id)a2 channel:(id)a3 extendedAddress:(id)a4 rssi:(id)a5 version:(id)a6 lqi:(id)a7;

@end
