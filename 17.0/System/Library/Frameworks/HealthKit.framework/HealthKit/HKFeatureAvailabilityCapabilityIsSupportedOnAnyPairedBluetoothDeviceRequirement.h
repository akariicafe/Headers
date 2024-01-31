@class NSString;

@interface HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)capabilityIsSupportedOnPairedBluetoothDevice:(id)a0;

@end
