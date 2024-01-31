@interface _SFPerSitePreferencesUtilities : NSObject

+ (BOOL)isBinaryPreferenceValueOn:(id)a0 preference:(id)a1 preferenceManager:(id)a2;
+ (id)preferenceValueForBoolValue:(BOOL)a0 preference:(id)a1 preferenceManager:(id)a2;
+ (id)preferenceValueForPSSpecifierValue:(id)a0 specifier:(id)a1 preference:(id)a2 preferenceManager:(id)a3;
+ (id)specifierValueForSpecifier:(id)a0 preferenceValue:(id)a1 preference:(id)a2 preferenceManager:(id)a3;

@end
