@class NSString, CMHeartRateData, NSDate;

@interface CMHighFrequencyHeartRateData : CMLogItem <SRSampling, SRSampleExporting> {
    CMHeartRateData *_heartRateData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double heartRate;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithHeartRateData:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
