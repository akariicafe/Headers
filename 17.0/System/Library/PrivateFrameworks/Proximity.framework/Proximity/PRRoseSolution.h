@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) unsigned long long mac_addr;
@property (readonly, nonatomic) double mach_absolute_time_sec;
@property (readonly, nonatomic) BOOL mach_continuous_time_valid;
@property (readonly, nonatomic) double mach_continuous_time_sec;
@property (readonly, nonatomic) double range_m;
@property (readonly, nonatomic) double range_unc_m;
@property (readonly, nonatomic) BOOL az_valid;
@property (readonly, nonatomic) BOOL el_valid;
@property (readonly, nonatomic) double az_deg;
@property (readonly, nonatomic) double el_deg;
@property (readonly, nonatomic) double az_unc_deg;
@property (readonly, nonatomic) double el_unc_deg;
@property (readonly, nonatomic) double fov_confidence;
@property (readonly, nonatomic) BOOL soi_rssi_valid;
@property (readonly, nonatomic) double soi_rssi_dbm;
@property (readonly, nonatomic) long long antenna_type;
@property (readonly, nonatomic) BOOL previous_solution_is_bad;
@property (readonly, nonatomic) BOOL track_score_valid;
@property (readonly, nonatomic) double track_score;
@property (readonly, nonatomic) BOOL sweep_angle_valid;
@property (readonly, nonatomic) double sweep_angle_deg;
@property (readonly, nonatomic) BOOL multipath_probability_valid;
@property (readonly, nonatomic) double multipath_probability;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVariant:(long long)a0 macAddr:(unsigned long long)a1 machAbsTime_sec:(double)a2 machContTimeValid:(BOOL)a3 machContTime_sec:(double)a4 range_m:(double)a5 rangeUnc_m:(double)a6 azValid:(BOOL)a7 elValid:(BOOL)a8 az_deg:(double)a9 el_deg:(double)a10 azUnc_deg:(double)a11 elUnc_deg:(double)a12 fovConfidence:(double)a13 soiRssiValid:(BOOL)a14 soiRssi_dBm:(double)a15 antennaType:(long long)a16 prevSolutionIsBad:(BOOL)a17 trackScoreValid:(BOOL)a18 trackScore:(double)a19 sweepAngleValid:(BOOL)a20 sweepAngle_deg:(double)a21 multipathProbabilityValid:(BOOL)a22 multipathProbability:(double)a23;

@end
