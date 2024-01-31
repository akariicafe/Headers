@interface CRFormContentTypeRefiner : NSObject

+ (id)_findSubTextFieldsInFields:(id)a0 beginIndex:(unsigned long long)a1 maxLength:(unsigned long long)a2 contentType:(unsigned long long)a3 processedCount:(unsigned long long *)a4;
+ (id)_groupCreditCardNumberFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2 processedCount:(unsigned long long *)a3;
+ (id)_groupPhoneNumberFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2 processedCount:(unsigned long long *)a3;
+ (id)_groupRegionFromSubFields:(id)a0;
+ (BOOL)_isRegion:(id)a0 onLeftOfRegion:(id)a1 withTolerance:(double)a2;
+ (unsigned long long)_refineAddressTypesForFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2;
+ (unsigned long long)_refineCreditCardExpirationTypesForFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2;
+ (unsigned long long)_refineDateTypesForFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2 locale:(id)a3;
+ (unsigned long long)_refinePhoneNumberTypesForFields:(id)a0 beginIndex:(unsigned long long)a1 type:(unsigned long long)a2;
+ (id)groupAndAssignStructuralContentTypesForFields:(id)a0 locale:(id)a1 updateExternalFields:(BOOL)a2;

@end
