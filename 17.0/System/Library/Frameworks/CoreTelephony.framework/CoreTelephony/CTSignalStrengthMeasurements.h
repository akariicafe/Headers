@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) NSNumber *rscp;
@property (retain, nonatomic) NSNumber *ecn0;
@property (retain, nonatomic) NSNumber *rsrp;
@property (retain, nonatomic) NSNumber *rsrq;
@property (retain, nonatomic) NSNumber *snr;
@property (retain, nonatomic) NSNumber *ecio;
@property (retain, nonatomic) NSNumber *rxagc;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
