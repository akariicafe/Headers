@class NSString, _HKDimension, HKUnit;

@interface HKQuantityType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding> {
    HKUnit *_canonicalUnit;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canonicalUnitLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _HKDimension *dimension;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly) long long aggregationStyle;

+ (id)_quantityTypeWithCode:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (void)validateUnit:(id)a0;
- (id)canonicalUnitForStatistics;
- (BOOL)isCompatibleWithUnit:(id)a0;
- (long long)aggregationStyleForStatistics;
- (BOOL)supportsStatisticOptions:(unsigned long long)a0;
- (id)_initWithCode:(long long)a0;
- (void).cxx_destruct;
- (id)underlyingSampleType;
- (void)validateUnitFromString:(id)a0;
- (id)defaultUnitForLocale:(id)a0 version:(long long)a1;
- (void)validateUnitForStatistic:(id)a0;

@end
