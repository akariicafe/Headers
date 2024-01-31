@interface IMSMSFilterCapabilitiesBinder : NSObject

+ (void)handleSubClassificationFilterChange;
+ (void)IMMetricsCollectorForSMSSubClassification:(unsigned long long)a0;
+ (BOOL)firstPartyFilterExtensionActive;
+ (long long)deLocalizeSubAction:(long long)a0 action:(long long)a1;
+ (void)executeCompletionBlockForFilterParamsUpdate:(id)a0 promo:(id)a1;
+ (void)handleSMSFilterCapabilitiesOptionsChange;
+ (BOOL)isValidSubAction:(long long)a0 subAction:(long long)a1;
+ (long long)localizeSubAction:(long long)a0;
+ (int)updateFilterParamsBindings:(id)a0 promotionalSubActions:(id)a1;

@end
