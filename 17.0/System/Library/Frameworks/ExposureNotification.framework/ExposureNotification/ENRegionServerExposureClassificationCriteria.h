@class NSString, NSDictionary;

@interface ENRegionServerExposureClassificationCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *classificationName;
@property (readonly, nonatomic) unsigned char index;
@property (readonly, nonatomic) unsigned int perDaySumERVThreshold;
@property (readonly, nonatomic) unsigned int perDayMaxERVThreshold;
@property (readonly, copy, nonatomic) NSDictionary *perDaySumERVThresholdsByDiagnosisReportType;
@property (readonly, nonatomic) unsigned int weightedDurationAtAttenuationThreshold;

+ (BOOL)getCriteria:(id *)a0 fromDictionary:(id)a1 index:(unsigned char)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
