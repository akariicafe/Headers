@interface SHSDualSIMToneHelper : NSObject

+ (BOOL)hasMultipleCTSubscriptionsInUse;
+ (BOOL)alertTypeSupportsSIMBasedToneCustomization:(long long)a0;
+ (id)fetchCTSubscriptionsInUse;
+ (id)fetchLocalizedPhoneNumberForContext:(id)a0;
+ (id)fetchShortLabelForContext:(id)a0;
+ (BOOL)shouldShowSIMBasedToneCustomizationForAlertType:(long long)a0;

@end
