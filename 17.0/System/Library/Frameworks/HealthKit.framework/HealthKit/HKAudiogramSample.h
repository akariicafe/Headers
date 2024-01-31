@class NSArray, NSString, NSData, HKHearingLevelSummary;

@interface HKAudiogramSample : HKSample <_HKBinarySample>

@property (retain, nonatomic) NSData *encodedSensitivityPoints;
@property (readonly, copy, nonatomic) HKHearingLevelSummary *hearingLevelSummary;
@property (readonly, copy) NSArray *sensitivityPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)_decodeSensitivityData:(id)a0;
+ (id)_encodeSensitivityPoints:(id)a0;
+ (double)_randomDecibelValueInRangeFromStart:(double)a0 end:(double)a1;
+ (id)_randomSensitivityValueForClassification:(unsigned long long)a0;
+ (id)audiogramSampleWithSensitivityPoints:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;
+ (id)audiogramSampleWithSensitivityPoints:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;
+ (id)randomAudiogramSampleWithClassification:(unsigned long long)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4;

- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)payload;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)diagnostic;
- (void)_setPayload:(id)a0;
- (id)_validateSensitivityPointsOrderedAscending;
- (id)averageLeftEarSensitivity;
- (id)averageRightEarSensitivity;
- (id)maximumSensitivity;
- (id)minimumSensitivity;

@end
