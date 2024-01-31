@class NSSet;

@interface HFAbstractRangeStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

+ (id)_defaultValueFormatter;
+ (unsigned long long)abstractCurrentModeInResponse:(id)a0;
+ (unsigned long long)abstractTargetModeInResponse:(id)a0;
+ (unsigned long long)badgeTypeForState:(long long)a0;
+ (id)controllableServiceTypes;
+ (id)currentModeCharacteristicTypes;
+ (long long)currentStateForResponses:(id)a0;
+ (id)currentValueCharacteristicType;
+ (id)customValueFormatter;
+ (id)descriptionStringForCharacteristicType:(id)a0 withResponses:(id)a1;
+ (id /* block */)displayValueComparator;
+ (id)formatValue:(id)a0 forCharacteristic:(id)a1;
+ (BOOL)isPercentRange;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)overrideValueDisplayRange;
+ (id)sensorServiceTypes;
+ (BOOL)shouldShowAverageForRange:(id)a0;
+ (unsigned long long)statusItemCategory;
+ (id)targetModeCharacteristicTypes;
+ (id)targetValueCharacteristicType;
+ (id)titleStringForState:(long long)a0;
+ (id)unknownValueDescriptionString;
+ (id)valueRangeForCharacteristicType:(id)a0 withResponses:(id)a1;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
