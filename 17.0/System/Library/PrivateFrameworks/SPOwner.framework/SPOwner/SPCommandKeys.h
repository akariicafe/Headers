@class NSString, NSDateInterval, NSData, SPBeaconingKey;

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPBeaconingKey *beaconingKey;
@property (copy, nonatomic) NSData *commandKey;
@property (copy, nonatomic) NSData *connectionToken;
@property (copy, nonatomic) NSData *nearbyToken;
@property (readonly, copy, nonatomic) NSData *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeaconingKey:(id)a0 commandKey:(id)a1 connectionToken:(id)a2 nearbyToken:(id)a3;

@end
