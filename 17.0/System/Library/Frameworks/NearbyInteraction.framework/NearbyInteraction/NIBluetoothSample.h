@class NSString;

@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (readonly) double rssi;
@property (readonly) NSString *identifier;
@property (readonly) NSString *model;
@property (readonly) int channel;
@property (readonly) double machContinuousTimeSeconds;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBluetoothSample:(id)a0;
- (id)initWithRSSI:(double)a0 identifier:(id)a1 model:(id)a2 channel:(int)a3 machContinuousTimeSeconds:(double)a4;

@end
