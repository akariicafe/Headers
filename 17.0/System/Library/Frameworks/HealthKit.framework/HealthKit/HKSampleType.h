@interface HKSampleType : HKObjectType

@property (readonly, nonatomic) BOOL isMaximumDurationRestricted;
@property (readonly, nonatomic) double maximumAllowedDuration;
@property (readonly, nonatomic) BOOL isMinimumDurationRestricted;
@property (readonly, nonatomic) double minimumAllowedDuration;
@property (readonly, nonatomic) BOOL allowsRecalibrationForEstimates;

+ (id)_sampleTypeWithCode:(long long)a0;
+ (id)medicalRecordTypes;
+ (id)medicalRecordTypesWithOptions:(unsigned long long)a0;

- (BOOL)supportsAttachments;
- (BOOL)canAttachFileOfType:(id)a0 size:(unsigned long long)a1 error:(id *)a2;
- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)a0;
- (id)_rollingBaselineConfiguration;
- (BOOL)_supportsRelativeDataCalculation;
- (id)_unitForChangeInCanonicalUnit;
- (BOOL)_validateStartDate:(double)a0 endDate:(double)a1 error:(id *)a2;
- (BOOL)hk_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;

@end
