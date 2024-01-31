@class NSArray;

@interface BiasEstimatorFeatures : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int antennaMask;
@property (nonatomic) double timestamp;
@property (nonatomic) double uwbTime;
@property (nonatomic) double tofPicSecond;
@property (nonatomic) double rssiDbm;
@property (nonatomic) double soiRssiDbm;
@property (nonatomic) double toaNoiseRms;
@property (nonatomic) double toaPpwinRms;
@property (nonatomic) double toaPpwinPeak;
@property (nonatomic) double rttInitiator;
@property (nonatomic) double tatInitiator;
@property (nonatomic) double rttResponder;
@property (nonatomic) double tatResponder;
@property (copy, nonatomic) NSArray *cirPacket1;
@property (nonatomic) double leadingEdgePacket1;
@property (nonatomic) double firstPathIndexPacket1;
@property (nonatomic) int rxAntennaPacket1;
@property (copy, nonatomic) NSArray *cirPacket2;
@property (nonatomic) double leadingEdgePacket2;
@property (nonatomic) double firstPathIndexPacket2;
@property (nonatomic) int rxAntennaPacket2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBiasEstimatorFeatures:(id)a0;
- (id)populateOrderedInputFeature;

@end
