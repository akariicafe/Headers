@class NSString, NSDate, NSNumber, ENRegion;

@interface ENExposureClassification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned char index;
@property (copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSNumber *confirmedTestPerDaySumERVAboveThreshold;
@property (copy, nonatomic) NSNumber *clinicalDiagnosisPerDaySumERVAboveThreshold;
@property (copy, nonatomic) NSNumber *selfReportPerDaySumERVAboveThreshold;
@property (copy, nonatomic) NSNumber *recursivePerDaySumERVAboveThreshold;
@property (copy, nonatomic) NSNumber *perDayMaxERVAboveThreshold;
@property (copy, nonatomic) NSNumber *perDaySumERVAboveThreshold;
@property (copy, nonatomic) NSNumber *weightedDurationAtAttenuationAboveThreshold;
@property (readonly, nonatomic) BOOL anyThresholdsExceeded;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
